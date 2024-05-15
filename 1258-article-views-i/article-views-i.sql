# Write your MySQL query statement below
select distinct author_id as id from Views where author_id =viewer_id and author_id is not null order by id;