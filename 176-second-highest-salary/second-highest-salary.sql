# Write your MySQL query statement below
-- select min(salary) as SecondHighestSalary from (select salary from Employee order by salary desc limit 2 ) AS subquery;
SELECT
  (SELECT DISTINCT Salary 
   FROM Employee 
   ORDER BY Salary DESC 
   LIMIT 1 OFFSET 1) 
AS SecondHighestSalary;
-- SELECT 
--     MAX(salary) AS SecondHighestSalary
-- FROM 
--     Employee
-- WHERE 
--     salary < (SELECT MAX(salary) FROM Employee);
