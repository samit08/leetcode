# Write your MySQL query statement below
-- select class from Courses where count(class) >5; 
select class from Courses group by class having count(class) >=5; 