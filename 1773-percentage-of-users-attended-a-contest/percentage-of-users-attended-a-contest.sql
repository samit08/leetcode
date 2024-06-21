SELECT 
    b.contest_id,
    ROUND(COUNT(b.user_id) / (SELECT COUNT(user_id) FROM Users) * 100, 2) AS percentage
FROM 
    Users a
RIGHT JOIN 
    Register b ON a.user_id = b.user_id
GROUP BY 
    b.contest_id
ORDER BY 
    percentage DESC,
    b.contest_id ASC;
