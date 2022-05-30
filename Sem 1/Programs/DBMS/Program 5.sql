REM   Script: Program 5
REM   asdf

create table employee( 
	empno varchar(10), 
	emp_name varchar(20), 
	dept varchar(10), 
	salary int, 
	dob date, 
	branch char(20) 
);

insert into employee values('E101', 'Amit', 'Production', 45000, '12-mar-00', 'banglore');

insert into employee values('E102', 'Amit', 'HR', 45000, '12-mar-00', 'banglore');

insert into employee values('E103', 'Sunita', 'Manager', 45000, '12-mar-00', 'banglore');

insert into employee values('E104', 'Sunita', 'IT', 45000, '12-mar-00', 'banglore');

insert into employee values('E105', 'Mahesh', 'Civil', 45000, '12-mar-00', 'banglore');

select count (*) from employee;

select distinct emp_name from employee;

