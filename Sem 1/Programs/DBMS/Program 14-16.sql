-- Table 1
create table branch(
    branchid number,
    branchname varchar(10),
    hod varchar(15),
    primary key(branchid)
);
desc branch;

insert into branch values(100, 'BCA','DR.ALLI');
insert into branch values(101, 'BCOM','DR.AYESHA');
insert into branch values(102, 'BA','DR.SHILPA');
select * from branch;

-- Table 2
create table student(
    usn number,
    name varchar(10),
    address varchar(15),
    branchid number,
    sem number,
    primary key(usn),
    foreign key(branchid) references branch(branchid)
);
desc student;

insert into student values(1, 'KIRAN','HEBBAL', 100,1);
insert into student values(2, 'AMISHA','HEBBAL', 100,1);
insert into student values(3, 'KEERTHI','SHIVAJINAGAR', 101,1);
insert into student values(4, 'KARTHIK','SHIVAJINAGAR', 101,1);
insert into student values(5, 'SATYA','SHIVAJINAGAR', 102,1);
insert into student values(6, 'SNEHA','SHIVAJINAGAR', 102,1);
select * from student;

-- Table 3
create table author(
    authorid number,
    authorname varchar(10),
    country varchar(15),
    age number,
    primary key(authorid)
);
desc author;

insert into author values(11, 'SNEHA','INDIA', 36);
insert into author values(22, 'RICHA','INDIA', 39);
insert into author values(33, 'RAVI','MALASIYA', 45);
insert into author values(44, 'JAMES','USA', 26);
select * from author

-- Table 4
create table book(
    bookid number,
    bookname varchar(10),
    authorid number,
    publisher varchar(15),
    branchid number,
    primary key(bookid),
    foreign key(authorid) references author(authorid),
    foreign key(branchid) references branch(branchid)
);
desc book;

insert into book values(1000, 'DBMS',11, 'HIMALAYA',100);
insert into book values(1001, 'C',22, 'SKYWARD',100);
insert into book values(1002, 'TALLY',33, 'HIMALAYA',101);
insert into book values(1003, 'FINANCE',33, 'KIRAN',101);
insert into book values(1004, 'JOURNALISM',44, 'SV PUBLISHERS',102);
insert into book values(1005, 'MEDIA',11, 'HIMALAYA',102);
select * from book;

-- Table 5
create table borrow(
    usn number,
    bookid number,
    borrowed_date date,
    foreign key(usn) references student(usn),
    foreign key(bookid) references book(bookid)
);
desc borrow;

insert into borrow values(1,1000,'18-jan-22');
insert into borrow values(2,1001,'19-jan-22');
insert into borrow values(2,1000,'19-jan-22');
insert into borrow values(3,1002,'16-jan-22');
insert into borrow values(2,1003,'3-jan-22');
insert into borrow values(4,1003,'11-jan-22');
select * from borrow;

-- Program 14
select bookname from book order by bookname desc;
select authorid, count(bookid) from book group by authorid;

-- Program 15
select branch.branchname,name,sem from student inner join branch on
    branch.branchid= student.branchid where branchname='BCA' and sem='1';

select usn,name from student where usn not in(select borrow.usn from borrow);

-- Program 16
select usn,count(bookid) from borrow group by usn having count(*)>2;

select distinct s.usn, s.name, br.branchname, b.bookname, a.authorname,
    bw.borrowed_date from student s join branch br on s.branchid=br.branchid
    join borrow bw on s.usn=bw.usn join book b on b.bookid=bw.bookid join author a on
    a.authorid=b.authorid where s.sem=1 and br.branchname='BCA';

