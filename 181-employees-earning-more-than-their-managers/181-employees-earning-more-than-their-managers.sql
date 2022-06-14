SELECT a.name as Employee
FROM Employee AS a, Employee AS b
where 
    a.managerID = b.ID 
    and
    a.salary > b.salary