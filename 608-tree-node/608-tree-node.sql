# Write your MySQL query statement below
select id, 
    case 
        when tree.id = (select a.id from tree a where a.p_id is null)
            then 'Root' 
        when tree.id in (select a.p_id from tree a)
            then 'Inner'
        else 'Leaf'
    end as type
from tree