REM   Script: Program 1
REM   EMP details

create table emp( 
    empno int, 
    name varchar(20), 
    dob date, 
    phone int, 
    primary key(empno));

desc emp


insert into emp values(1001, 'Anurag', '21-dec-2003', 1111111111);

insert into emp values(1002, 'Parul', '21-oct-2003', 2222222222);

insert into emp values(1003, 'Shiv', '12-dec-2004', 3333333333);

insert into emp values(1004, 'Ankit', '14-jul-2003', 4444444444);

select * from emp;

