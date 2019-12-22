-- join
set theory
inner join ==> common ==> intersection
outer
full outer join ==> union
right outer join ==> A
left outer join ==> B

use AdventureWorks2012
select * from Person.Person
select * from person.Address

select A.firstName, A.lastName,A.BusinessEntityID,B.city,B.AddressID
from
person.person A
inner join
person.Address B
on
A.BusinessEntityId = B.AddressId
order by A.BusinessEntityID asc

select A.firstName, A.lastName,A.BusinessEntityID,B.city,B.AddressID
from
person.person A
full outer join
person.Address B
on
A.BusinessEntityId = B.AddressId
order by A.BusinessEntityID asc

select A.firstName, A.lastName,A.BusinessEntityID,B.city,B.AddressID
from
person.person A
right outer join
person.Address B
on
A.BusinessEntityId = B.AddressId
order by A.BusinessEntityID asc

create view vw_myView as
select top 1000 A.firstName, A.lastName,A.BusinessEntityID,B.city,B.AddressID
from
person.person A
left outer join
person.Address B
on
A.BusinessEntityId = B.AddressId
order by A.BusinessEntityID asc

select * from vw_myView


-- stored procedure
create table myTable
(
	id int,
	name varchar(30),
	[roll no] int
)

create procedure sp_myprocedure
@id int,
@name varchar(30),
@roll int,
@stmt varchar(30) = ' '
as
Begin
	if @stmt = 'insert'
	begin
		insert into myTable values(@id,@name,@roll)
	end
	if @stmt = 'select'
	begin
		select name, [roll no] from myTable where id = @id
	end
	if @stmt = 'update'
	begin
		update myTable set name = @name, [roll no] = @roll where id = @id
	end
	if @stmt = 'delete'
	begin
		delete from myTable where id = @id 
	end
end

exec sp_myprocedure 1, 'Ram', 23 , 'insert'
exec sp_myprocedure 2, 'Shyam', 24 , 'insert'
exec sp_myprocedure 3, 'Hari', 25 , 'insert'
exec sp_myprocedure 2, null, null , 'select'
exec sp_myprocedure 3, 'Harisaran', 26 , 'update'
exec sp_myprocedure 1, null, null , 'delete'
select * from myTable



create trigger mytrigger
on myTable
for delete
as
	if 24 in (select [roll no] from deleted)
	begin
		print 'This Roll number cannot be deleted';
		rollback transaction;
	end

exec sp_myprocedure 2, null, null, 'delete'


-- error handling
begin try
	declare @num1 int
	select @num1 = 217/0;
	print @num1;
end try
begin catch
	print 'Divide By Zero Error'
	print ERROR_MESSAGE();
	print Error_State();
	print Error_severity();
	print Error_Number();
	print error_line();
	throw;
end catch