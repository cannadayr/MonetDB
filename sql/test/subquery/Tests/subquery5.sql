CREATE TABLE tbl_ProductSales (ColID int, Product_Category  varchar(64), Product_Name  varchar(64), TotalSales int); 
INSERT INTO tbl_ProductSales VALUES (1,'Game','Mobo Game',200),(2,'Game','PKO Game',400),(3,'Fashion','Shirt',500),(4,'Fashion','Shorts',100);
CREATE TABLE another_T (col1 INT, col2 INT, col3 INT, col4 INT, col5 INT, col6 INT, col7 INT, col8 INT);
INSERT INTO another_T VALUES (1,2,3,4,5,6,7,8), (11,22,33,44,55,66,77,88), (111,222,333,444,555,666,777,888), (1111,2222,3333,4444,5555,6666,7777,8888);
CREATE TABLE integers(i INTEGER);
INSERT INTO integers VALUES (1), (2), (3), (NULL);

SELECT
    (SELECT MIN(col1) GROUP BY col2)
FROM another_T; --error, subquery uses ungrouped column "another_T.col2" from outer query

SELECT
    (SELECT MIN(col1) WHERE SUM(col2) > 1),
    CAST(SUM((SELECT col1 FROM tbl_ProductSales GROUP BY col2)) AS BIGINT)
FROM another_T GROUP BY col2;
	-- 1    1
	-- 11   11
	-- 111  111
	-- 1111 1111

SELECT
    (SELECT MIN(col1) WHERE SUM(SUM(col2)) > 1),
    CAST(SUM((SELECT col1 FROM tbl_ProductSales GROUP BY col2)) AS BIGINT)
FROM another_T GROUP BY col2; --error, aggregate function calls cannot be nested

SELECT 
    CAST(SUM((SELECT col1 FROM tbl_ProductSales GROUP BY col2)) OVER () AS BIGINT), 
    CAST(SUM((SELECT SUM(ColID) FROM tbl_ProductSales GROUP BY col2)) OVER () AS BIGINT)
FROM another_T;
	-- 1234 40
	-- 1234 40
	-- 1234 40
	-- 1234 40

CREATE OR REPLACE FUNCTION evilfunction(input INT) RETURNS TABLE (outt INT) BEGIN RETURN SELECT 1,2; END; --error, number of projections don't match

CREATE OR REPLACE FUNCTION evilfunction(input INT) RETURNS INT BEGIN RETURN TABLE(SELECT input, 2); END; --error, TABLE return not allowed for non table returning functions

CREATE OR REPLACE FUNCTION evilfunction(input INT) RETURNS INT BEGIN RETURN SELECT input, 2; END; --error, more than 1 return

CREATE OR REPLACE FUNCTION evilfunction(input INT) RETURNS INT BEGIN RETURN SELECT input WHERE FALSE; END;

SELECT evilfunction(1);
	-- NULL
SELECT evilfunction(1);
	-- NULL
SELECT evilfunction(1), 1;
	-- NULL, 1

CREATE OR REPLACE FUNCTION evilfunction(input INT) RETURNS INT 
BEGIN
	RETURN SELECT input UNION ALL SELECT input;
END;

SELECT evilfunction(1);
 	--error, more than one row returned by a subquery used as an expression
SELECT evilfunction(1);
 	--error, more than one row returned by a subquery used as an expression
SELECT evilfunction(1), 1;
	--error, more than one row returned by a subquery used as an expression

SELECT 1 FROM another_t t1 HAVING 1 = ANY (SELECT col1); --error, subquery uses ungrouped column "col1" from outer query

SELECT 1 FROM another_t t1 HAVING 1 = ANY (SELECT t1.col1); --error, subquery uses ungrouped column "t1.col1" from outer query

SELECT 1 FROM another_t t1 HAVING 1 = ANY (SELECT 1 WHERE col1); --error, subquery uses ungrouped column "col1" from outer query

SELECT 1 FROM another_t t1 HAVING 1 = ANY (SELECT 1 WHERE t1.col1); --error, subquery uses ungrouped column "t1.col1" from outer query

SELECT col1 FROM another_t t1 GROUP BY col1 HAVING 1 = ANY (SELECT col1);
	-- 1

SELECT (SELECT i = ANY(VALUES(1), (i))) FROM integers;
	-- True
	-- True
	-- True
	-- NULL

SELECT (SELECT i1.i IN (SELECT SUM(i1.i))) FROM integers i1; --error, subquery uses ungrouped column "i1.i" from outer query

SELECT corr(i1.i, i2.i) FROM integers i1, integers i2;
	-- 0

SELECT corr(i1.i, i2.i) OVER () FROM integers i1, integers i2;
	-- 16 rows with 0

SELECT (SELECT SUM(i1.i) IN (SELECT CORR(i1.i, i2.i) FROM integers i2)) FROM integers i1; --error, subquery uses ungrouped column "i1.i" from outer query

SELECT (SELECT corr(SUM(col1), SUM(col2))) FROM another_t; --error, aggregate function calls cannot be nested

SELECT (SELECT corr(col1, SUM(col2))) FROM another_t; --error, aggregate function calls cannot be nested

SELECT (SELECT corr(col1, SUM(col2))) FROM another_t GROUP BY col1; --error, aggregate function calls cannot be nested

SELECT (SELECT corr(col1, SUM(col2))) FROM another_t GROUP BY col2; --error, aggregate function calls cannot be nested

SELECT (SELECT corr(col1, col2) WHERE corr(col3, SUM(col4)) > 0) FROM another_t GROUP BY col5; --error, aggregate function calls cannot be nested

SELECT (SELECT 1 GROUP BY SUM(col2 + 1)) FROM another_t;
	-- 1

SELECT (SELECT 1 WHERE SUM(col2 + 1) > 0) FROM another_t;
	-- 1

SELECT (SELECT col1 HAVING SUM(col2 + col1) > 0) FROM another_t; --error, subquery uses ungrouped column "another_t.col1" from outer query

SELECT (SELECT col1 FROM another_t t1, another_t t2) FROM another_t t3; --error, col1 is ambiguous

SELECT (SELECT SUM(SUM(col2) + 1)) FROM another_t; --error, aggregate function calls cannot be nested

SELECT (SELECT MIN(t1.col5 - col2) FROM another_T t2) FROM another_T t1 GROUP BY col6; --error, subquery uses ungrouped column "t1.col5" from outer query

SELECT (SELECT SUM(SUM(1))) FROM another_t; --error, aggregate function calls cannot be nested

SELECT (SELECT SUM(SUM(t2.col1)) FROM another_t t2) FROM another_t t1; --error, aggregate function calls cannot be nested

SELECT (SELECT CAST(SUM(col2 - 1) AS BIGINT) GROUP BY SUM(col2 + 1)) FROM another_t;
	-- 2464

SELECT (SELECT CAST(SUM(col2 + 1) AS BIGINT) GROUP BY SUM(col2 + 1)) FROM another_t;
	-- 1238

SELECT (WITH a AS (SELECT col1) SELECT a.col1 FROM a) FROM another_t;
	-- 1
	-- 11
	-- 111
	-- 1111

SELECT (VALUES(col1)) FROM another_t;
	-- 1
	-- 11
	-- 111
	-- 1111

SELECT CAST((VALUES(SUM(col1 + col2))) AS BIGINT) FROM another_t;
	-- 3702

SELECT (VALUES(col1, col2)) FROM another_t; --error, subquery must return only one column

SELECT (VALUES(col1), (col2)) FROM another_t; --error, more than one row returned by a subquery used as an expression

DROP FUNCTION evilfunction(INT);
DROP TABLE tbl_ProductSales;
DROP TABLE another_T;
DROP TABLE integers;
