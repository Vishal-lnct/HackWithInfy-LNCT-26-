# Write your MySQL query statement below

SELECT x.customer_id,
  COUNT(*) AS count_no_trans

from  Visits as x
left join  Transactions y
on x.visit_id=y.visit_id
WHERE y.transaction_id is null
group by customer_id


