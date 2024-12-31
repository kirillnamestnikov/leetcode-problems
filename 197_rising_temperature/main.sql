-- Write your PostgreSQL query statement below
select today.id 
from Weather yesterday
cross join Weather today
where today.recordDate - yesterday.recordDate = 1
and today.temperature > yesterday.temperature;