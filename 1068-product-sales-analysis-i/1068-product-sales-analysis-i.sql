select y.product_name,x.year,x.price 
from Sales x
left join Product y
on x.product_id=y.product_id;
