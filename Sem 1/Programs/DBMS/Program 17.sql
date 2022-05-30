create table cowinapps(
    aadharid number,
    name varchar(10),
    gender char(6),
    age number,
    phno number,
    primary key(aadharid)
);

insert into cowinapps values(11111,'Amal','M',37,9845917113);
insert into cowinapps values(22222,'Sowmya','F',30,9400483767);
insert into cowinapps values(33333,'Krithik','M',6,9985677413)
insert into cowinapps values(44444,'Vyshu','F',11,9800000000);
insert into cowinapps values(55555,'Anu','F',19,93878327923); 

create view cowinview as select aadharid,name,age from cowinapps where age > 18;
select * from cowinview;
