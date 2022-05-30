
create table student(
    usn varchar(6),
    name varchar(15),
    date_of_birth date,
    branch char(5),
    mark1 int,
    mark2 int,
    mark3 int,
    total int,
    gpa decimal(4,2),
    primary key (usn)
);

desc student;

insert into student values('BCA001','Aishu','28-dec-1989','CS',70,60,65,195,7.5);
insert into student values('BCA002','Sneha','7-jan-2000','ARTS',71,62,50,183,7.1);
insert into student values('BCA003','Ram','25-nov-2001','COM',80,70,50,200,7.7);
insert into student values('BCA004','Raj','5-feb-2000','B.E',60,60,61,181,7.1);
insert into student values('BCA005','Khan','23-jun-2002','B.A',70,75,55,200,7.7);
select*from student;

update student set name='Sneha Pandit' where usn='BCA002';
select*from student;

delete from student where usn='BCA005';
select*from student;

commit;
