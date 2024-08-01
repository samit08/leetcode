# Write your MySQL query statement below
-- select a.product_name,sum(b.unit) as unit from  Products as a right  join Orders as b on a.product_id=b.product_id where order_date >'2020-02-01' and order_date < '2020-02-29' group by b.product_id having unit >=100;


-- Write your MySQL query statement below
SELECT p.product_name, 
       SUM(o.unit) AS unit 
FROM Products p 
JOIN Orders o 
ON p.product_id = o.product_id 
WHERE o.order_date >= '2020-02-01' 
  AND o.order_date <= '2020-02-29'
GROUP BY o.product_id 
HAVING unit >= 100;



