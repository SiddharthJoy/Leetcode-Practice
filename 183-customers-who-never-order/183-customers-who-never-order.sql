select name as Customers
from Customers
Left Join Orders on Customers.id = customerId
where Orders.id is null