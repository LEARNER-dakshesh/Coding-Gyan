# Write your MySQL query statement below
Select signups.user_id,round(avg(if(c.action="confirmed",1,0)),2) as confirmation_rate
from Signups as signups 
left join Confirmations as c
on signups.user_id=c.user_id
group by signups.user_id;