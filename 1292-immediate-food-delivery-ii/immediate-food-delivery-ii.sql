# Write your MySQL query statement below

Select 
round(sum(If(order_date=customer_pref_delivery_date,1,0))*100/count(distinct customer_id),2)
as immediate_percentage
from Delivery
Where (customer_id,order_date) In(
Select customer_id,min(order_date) as first_order_date
from Delivery 
group by customer_id);