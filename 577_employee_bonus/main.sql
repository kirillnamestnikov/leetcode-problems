-- Write your PostgreSQL query statement below
select Employee.name, Bonus.bonus
from Employee
left join Bonus
  on Bonus.empId = Employee.empId
  where Bonus.bonus < 1000 or Bonus.bonus is null;
