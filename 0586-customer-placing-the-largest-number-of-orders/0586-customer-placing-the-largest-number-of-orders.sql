SELECT customer_number 
From Orders
group by customer_number
order by count(order_number)desc 

limit 1;
