# Write your MySQL query statement below
-- select num from MyNumbers group by num having count(num)=1 order by desc
-- SELECT num
-- FROM MyNumbers
-- GROUP BY num
-- HAVING COUNT(num) = 1
-- ORDER BY num DESC limit 1;
SELECT
    CASE
        WHEN COUNT(num) > 0 THEN MAX(num)
        ELSE NULL
    END as num
FROM (
    SELECT num
    FROM MyNumbers
    GROUP BY num
    HAVING COUNT(num) = 1
) as single_numbers;

