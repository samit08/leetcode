# Write your MySQL query statement below
select  LEFT(trans_date, 7) AS month ,country,count(id) trans_count,sum(state='approved') as approved_count , sum(amount) as trans_total_amount,   SUM(IF(state = 'approved', amount, 0)) as approved_total_amount
from Transactions group by month,country;
