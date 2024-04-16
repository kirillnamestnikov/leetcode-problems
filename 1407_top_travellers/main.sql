# Write your MySQL query statement below
SELECT name, (IFNULL(SUM(distance), 0)) as travelled_distance FROM Users LEFT join Rides 
ON Users.id=Rides.user_id
GROUP BY Users.id
ORDER BY travelled_distance DESC, name ASC
