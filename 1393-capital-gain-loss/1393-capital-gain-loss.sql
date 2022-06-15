# Write your MySQL query statement below

Select a.stock_name, (a.price - b.price) as capital_gain_loss
from (
        select stock_name,sum(price) as price
        from stocks
        where operation = 'Sell'
        group by stock_name,operation
) as a, 
(
        select stock_name,sum(price) as price
        from stocks
        where operation = 'Buy'
        group by stock_name,operation
) as b
where a.stock_name = b.stock_name;