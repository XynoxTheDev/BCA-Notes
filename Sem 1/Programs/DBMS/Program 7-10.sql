REM   Script: insert
REM   asdf

drop table employee;
drop table department; 
drop table dependent;
drop table dept_location; 
drop table project;
drop table work_on;


create table employee(  
	fname varchar(20) not null,  
	minit char(1) not null,  
	lname varchar(20) not null,  
	ssn char(9) not null,  
	bdate date null,  
	address varchar(50) null,  
	sex char(1) null,  
	salary decimal(10, 2),  
	superssn char(9) null,  
	dno int not null,  
	primary key(ssn)  
);

desc employee

insert into employee values('Harini', 'A', 'Gowda', '1010', '14-april-1990', 'kempapura', 'f', 60000, null, 1);
insert into employee values('Damini', 'B', 'Kumari', '2020', '15-march-2001', 'hebbal', 'f', 65000, null, 3);
insert into employee values('anurag', 'K', 'Singh', '3030', '07-oct-1990', 'banglore', 'm', 70000, null, 3);
insert into employee values('parul', 'b', 'budhori', '4040', '26-jul-2003', 'kanpur', 'f', 80000, null, 4);
insert into employee values('Shiv', 'A', 'shan', '5050', '7-jan-2003', 'bihar', 'm', 90000, null, 5);

select * from employee;


create table department(  
	dname varchar(15) not null unique,  
	dnumber int not null,  
	mgrssn char(9) not null,  
	msrstartdate date,  
	primary key(dnumber)  
);

desc department;

insert into department values('marketing', 1, '1010', '24-jan-2001');
insert into department values('finance', 2, '2020', '25-jun-2000');
insert into department values('account', 3, '3030', '19-jul-2001');
insert into department values('sales', 4, '4040', '7-jan-1999');
insert into department values('purchase', 5, '5050', '3-apr-2005');

select * from department;


create table dept_location(  
	dnumber int,  
	dlocation varchar(20),  
	foreign key (dnumber) references department(dnumber),  
	primary key(dnumber, dlocation)  
);
desc dept_location;

insert into dept_location values(1, 'karnataka');
insert into dept_location values(2, 'Tamil nadu');
insert into dept_location values(3, 'pune');
insert into dept_location values(4, 'bihar');
insert into dept_location values(5, 'punjab');
select * from dept_location;

create table project(  
	pname varchar(15) not null unique,  
	pnumber int not null,  
	plocation varchar(20),  
	dnum int not null,  
	primary key(pnumber)  
);
desc project;

insert into project values('PTA', 1, 'Bihar', 2);
insert into project values('PTB', 2, 'Pune', 3);
insert into project values('PTC', 3, 'Delhi', 4);
insert into project values('PTD', 4, 'mumbai', 5);
insert into project values('PTE', 5, 'karnataka', 5);
select * from project;

create table work_on(  
	essn char(9) not null,  
	pno int not null,  
	hours decimal(3, 1),  
	primary key(essn, pno)  
);
desc work_on;

insert into work_on values ('1010', 1, 22.4);
insert into work_on values ('2020', 2, 25.4);
insert into work_on values ('3030', 3, 28.5);
insert into work_on values ('4040', 4, 60.3);
insert into work_on values ('5050', 5, 49.8);
select * from work_on;

create table dependent(  
	essn char(9) not null,  
	dependent_name varchar(15) not null,  
	sex char(1),  
	bdate date,  
	relationship varchar(8),  
	primary key(essn, dependent_name)  
);
desc dependent;

insert into dependent values ('1010', 'Rashi', 'f', '6-may-2001', 'Daughter');
insert into dependent values ('2020', 'Sakshi', 'f', '2-jul-2002', 'sister');
insert into dependent values ('3030', 'Raju', 'm', '10-march-2003', 'son');
insert into dependent values ('4040', 'ranjan', 'm', '4-jul-2005', 'son');
insert into dependent values ('5050', 'anita', 'f', '20-june-2005', 'daughter');
select * from dependent;

-- program 7
select sum(salary), min(salary), max(salary) from employee, department where dno=dnumber and dname='account';

-- program 8
select pnumber, pname, count(*) from project, work_on where pnumber=pno group by pnumber, pname;

select fname from employee where bdate between '01-jan-1990' and '31-dec-1990';

-- program 9
select fname, lname from employee where exists (select * from dependent where ssn=essn)
 and exists (select * from department where ssn=mgrssn);

select dname as department, count(*) as employee from department inner
 join employee on employee.dno=department.dnumber group by department.dnumber, dname order by dname;

--program 10
select dno, count(*) from employee where salary>40000 group by dno having count(*)>3;

select pnumber, pname, count(*) from project, work_on where pnumber=pno group by pnumber, pname;