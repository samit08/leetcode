# Write your MySQL query statement below
select id,movie,description,rating from Cinema where id%2 <>0  and description not like 'boring' and rating >5 order by rating desc;