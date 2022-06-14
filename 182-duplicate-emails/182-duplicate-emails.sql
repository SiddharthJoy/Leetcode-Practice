# Write your MySQL query statement below
Select distinct a.email
from Person as a, person as b
where
    a.id < b.id
    and
    a.email = b.email