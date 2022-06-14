# Write your MySQL query statement below
Select distinct a.player_id,a.event_date as first_login
from Activity a, Activity b
where
(
    a.player_id = b.player_id
    and
    a.event_date = (select min(event_date) 
                    from Activity 
                    where player_id = a.player_id
                    group by player_id)
)