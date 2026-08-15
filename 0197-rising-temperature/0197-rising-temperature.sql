# Write your MySQL query statement below
select p2.id 
from Weather p1
join Weather p2

ON DATEDIFF(p2.recordDate, p1.recordDate)= 1 
where p1.temperature<p2.temperature;



