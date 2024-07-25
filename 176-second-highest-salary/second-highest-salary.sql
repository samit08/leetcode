# Write your MySQL query statement below
-- select min(salary) as SecondHighestSalary from (select salary from Employee order by salary desc limit 2 ) AS subquery;
-- SELECT salary
-- FROM Employee
-- ORDER BY salary DESC
-- LIMIT 2 OFFSET 2;
SELECT 
    MAX(salary) AS SecondHighestSalary
FROM 
    Employee
WHERE 
    salary < (SELECT MAX(salary) FROM Employee);
