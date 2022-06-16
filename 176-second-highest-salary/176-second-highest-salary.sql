# Write your MySQL query statement below

select max(d.SecondHighestSalary) as SecondHighestSalary
from (
    select a.salary as SecondHighestSalary
    from employee a,(
        select max(b.salary) as salary from employee b
    ) as c
    where a.salary < c.salary
) as d
