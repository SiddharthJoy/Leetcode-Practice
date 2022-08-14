# Write your MySQL query statement below

select D.name as Department,E.name as Employee,Salary
from employee E, department D
where E.salary = (select max(salary)
                     from Employee,Department
                     where departmentId = department.id and E.departmentId = departmentId
                     group by department.name) and D.id = E.departmentId
