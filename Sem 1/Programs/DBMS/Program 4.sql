REM   Script: Program 4
REM   student

create table student( 
    regno int, 
    sname varchar(15), 
    address varchar(30), 
    gender varchar(10), 
    primary key(regno));

desc student


alter table student drop column address;

desc student


alter table student modify(gender char(20));

desc student


insert into student values(101, 'Anurag', 'male');

insert into student values(102, 'Parul', 'female');

insert into student values(103, 'Shreya', 'female');

insert into student values(104, 'Shiv', 'male');

insert into student values(105, 'Ankit', 'male');

insert into student values(106, 'Ankita', 'female');

insert into student values(107, 'Zeds', 'male');

select * from student;

delete student sname where sname = 'Shreya';

update student set sname='Philip' where regno=104;

update student set gender='female' where regno=105;

select * from student;

rollback


commit


