-- Fk and Pk

create table neoregister
(
	id int primary key,
	name varchar(30),
	age tinyint
)
go
create table neoteam
(
	id int foreign key references neoregister(id),
	teamName varchar(30)	
)

insert into neoregister values (101,'Ram',23),(102,'shyam',24),(103,'Hari',25);
select * from neoregister

insert into neoteam values (101,'Killers'),(102,'killers'),(103,'Terminator'),
(101,'Terminator')

select * from neoteam

insert into neoteam values(104,'killers');
insert into neoregister values(101,'sita',30)


use AdventureWorks2012

select left('International',5);
select right('International',8);

-- displaying all columns
select * from HumanResources.Employee;

-- specific column
select BusinessEntityID, JobTitle from HumanResources.Employee 

select JobTitle + '==>' + Gender as concatenation from HumanResources.Employee 

select * from Production.ProductCostHistory

select ProductID, StandardCost, StandardCost*0.15 as Discount from
Production.ProductCostHistory 

select distinct top 10 percent StandardCost from Production.ProductCostHistory
order by StandardCost desc

select ProductID , StandardCost from Production.ProductCostHistory
 where StandardCost >= 1554.9479 and ProductId <= 796 


 -- wild cards
select * from Person.Person

-- _ , %

select * from Person.Person where Suffix like 'Jr_'
select * from Person.Person where FirstName like 'A%'
select * from Sales.CurrencyRate where ToCurrencyCode like 'C[AN][DY]'
select * from Sales.CurrencyRate where ToCurrencyCode like 'A[^R][^S]'


--Aggregate Function
-- avg, sum, count, min, max

select * from Sales.SalesOrderDetail

select AVG(UnitPrice) as Average,
SUM(UnitPrice) as TotalSum,
COUNT(Unitprice) As TotalCount,
MIN(UnitPrice) as MinimumValue,
MAX(UnitPrice) as MaximumValue
from Sales.SalesOrderDetail


--groupby
select * from Production.WorkOrderRouting

select WorkOrderID, avg(ActualResourceHrs) as ActualResoucesHrs from Production.WorkOrderRouting
group by WorkOrderID Having avg(ActualResourceHrs)< 3












