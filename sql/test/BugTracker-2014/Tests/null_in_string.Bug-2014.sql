
CREATE TABLE x (a CLOB);
COPY 3 RECORDS INTO x FROM STDIN USING DELIMITERS ',', E'\n', '''';
'null'
'aap'
'beer'
SELECT * FROM x WHERE a IS NULL;
DROP TABLE x;
