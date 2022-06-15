# Write your MySQL query statement below
Select id,
    case
    when mod(id,2) = 0 
        then (select a.student from seat a where a.id = seat.id-1)
    when mod(id,2) = 1
        then (
            case
            when (select a.student from seat a where a.id = seat.id+1) is null
            then (select a.student from seat a where a.id = seat.id)
            else (select a.student from seat a where a.id = seat.id+1)
            end
            )
    end as student
from seat