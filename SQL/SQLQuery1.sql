/* create database */
create database Qwerty

-- use database
use Qwerty

-- change name
alter database Qwerty modify name = animals

-- delete database
drop database animals

create database fop4 

use fop4

-- creating a table
create table students
(
	std_id int,
	std_name varchar(50)
)

-- view table
select * from students

-- data insert
insert into students values (101,'Ram'),(102,'Shyam')

-- modify datatype of column
alter table students alter column std_id varchar(10)

insert into students values ('A102','Hari')

-- add column
alter table students add section varchar(5)

-- update data
update students set section = 'A' where section is null

select * from students

update students
set std_id = 'B101'
where std_name = 'Ram'

-- drop column
alter table students
drop column section

-- delete data
delete from students where std_id = '102'

-- make table empty
truncate table students

select * from students

-- delete table
drop table students

-- constraint
create table school
(
	id int identity(101,1),
	name varchar(50) not null,
	[contact number] numeric(10,0) unique not null,
	email varchar(80) null,
	fee money default 1000,
	mark int not null check (mark>=40 and mark <=100)
)

insert into school (name, [contact number], email, fee, mark)
values ('Ram',9801200111, 'ram@ram.com', 2000, 50)

insert into school (name, [contact number], email, fee, mark)
values ('Shyam',9801200112, 'ram@shyam.com', 2000, 50)

insert into school ( [contact number], email, fee, mark)
values (9801200113, 'ram@shyam.com', 2000, 50)

insert into school (name, [contact number], email, fee, mark)
values ('Hari',9801200112, 'ram@shyam.com', 2000, 50)

insert into school (name, [contact number], mark)
values ('Sita',9801200114, 50)

insert into school (name, [contact number], mark)
values ('gita',9801200115, 30)

select * from school

select * from Customers
use AdventureWorks2012
-- forign key , primary key
-- adventureworks ==> sample database by microsoft
-- join, view, stored procedure, triggers, error handling