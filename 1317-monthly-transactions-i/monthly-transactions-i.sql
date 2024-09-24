# Write your MySQL query statement below
Select Left(trans_date,7) as month,
country,
count(distinct id) as trans_count,
sum(state ='approved') as approved_count,
sum(amount) as trans_total_amount,
sum(If(state='approved',amount,0)) as approved_total_amount 
from transactions
group by month,country;
