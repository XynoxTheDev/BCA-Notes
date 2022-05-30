REM   Script: Program 2
REM   Department

create table dept( 
    deptno int, 
    dname varchar(20), 
    loc varchar(30));

desc dept

alter table dept rename to department;

desc department

alter table department add(pincode varchar(30) not null);

desc department

alter table department rename column dname to dept_name;

desc department

alter table department modify loc char(10);

desc department

drop table department;



