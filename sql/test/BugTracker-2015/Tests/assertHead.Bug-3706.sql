CREATE TABLE t1(a INTEGER, b INTEGER, c INTEGER, d INTEGER, e INTEGER);
INSERT INTO t1(e,c,b,d,a) VALUES(103,102,100,101,104);
INSERT INTO t1(a,c,d,e,b) VALUES(107,106,108,109,105);
INSERT INTO t1(e,d,b,a,c) VALUES(110,114,112,111,113);
INSERT INTO t1(d,c,e,a,b) VALUES(116,119,117,115,118);
SELECT (SELECT count(*) FROM t1 AS x WHERE x.b<t1.b) FROM t1 WHERE (a>b-2 AND a<b+2) OR c>d ORDER BY 1;
drop table t1;
