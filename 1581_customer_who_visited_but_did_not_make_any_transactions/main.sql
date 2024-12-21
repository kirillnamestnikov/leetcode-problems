-- Write your PostgreSQL query statement below
select Visits.customer_id, count(Visits.visit_id) as count_no_trans
from Visits
where visit_id not in (select visit_id from Transactions) group by customer_id;
