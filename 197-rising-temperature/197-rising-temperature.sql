# Write your MySQL query statement below
select a.id 
from weather as a,weather  as b
where
(
    DATEDIFF(a.recordDate, b.recordDate) = 1
    and
    a.temperature > b.temperature
)