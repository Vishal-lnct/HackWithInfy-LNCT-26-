# Write your MySQL query statement below
select c.name as Customers
from Customers c
 left join Orders p
on c.id=p.customerId
where p.customerId is NULl;
