select name
from salesperson
where sales_id not in
(
    select sales_id
    from orders natural join company
    where name = 'RED'
)