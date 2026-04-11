# Write your MySQL query statement below
SELECT x.id
From Weather x
join Weather y
on DATEDIFF(x. recordDate,y.recordDate)=1
WHERE x.temperature > y.temperature;

