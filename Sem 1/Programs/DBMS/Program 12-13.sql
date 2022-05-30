create table student(
    usn varchar(6),
    name varchar(15),
    dob date,
    branch varchar(20),
    percentage decimal(5,2),
    gpa decimal(4,2),
    primary key (usn)
);

desc student;


insert into student (usn, name, dob, branch, percentage) values
    ('BCA001','Akash','12-dec-2000','Computer Science',80.1);

insert into student (usn, name, dob, branch, percentage) values
    ('BCA002','Sneha','22-jul-2001','Arts',70.9);

insert into student (usn, name, dob, branch, percentage) values
    ('BCA003','Prem','2-jan-2000', 'Computer Science',65.2);

insert into student (usn, name, dob, branch, percentage) values
    ('BCA004','Bikash','9-sep-1999','Commerce',95.21);

insert into student (usn, name, dob, branch, percentage) values
    ('BCA005','Sandhya','17-aug-2001','Arts',63.41);

select * from student;

-- Program 12
update student set gpa=(percentage/100)*4 ;
select * from student;

select * from student where dob between '01-jan-2000' and '31-dec-2000';


-- Program 13
select * from student where branch='Arts';

select branch, max(gpa) from student group by branch;
