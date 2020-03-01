START TRANSACTION;

set optimizer='mosaic_pipe';

create table tmp3rle( i integer);
insert into tmp3rle values
(1),
(1),
(1),
(1),
(1),
(1),
(1),
(1),
(1),
(1),
(1),
(1),
(1),
(1),
(1),
(2),
(3),
(2),
(3),
(2),
(3),
(4),
(4),
(4),
(4),
(4),
(4),
(4),
(4),
(4),
(4),
(4),
(4),
(4),
(4),
(4),
(0),
(5),
(6),
(7),
(8),
(9),
(10),
(1),
(1),
(1),
(1),
(1),
(1),
(1),
(1),
(1),
(1),
(1),
(1),
(1),
(1),
(1),
(2),
(3),
(2),
(3),
(2),
(3),
(4),
(4),
(4),
(4),
(4),
(4),
(4),
(4),
(4),
(4),
(4),
(4),
(4),
(4),
(4),
(0),
(5),
(6),
(7),
(8),
(9),
(10);

alter table tmp3rle set read only;

alter table tmp3rle alter column i set storage 'frame';

select compressed from storage where "table"='tmp3rle';
select * from mosaic.layout('sys','tmp3rle','i');

drop table tmp3rle;
ROLLBACK;
