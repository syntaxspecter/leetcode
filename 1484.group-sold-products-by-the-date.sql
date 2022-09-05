--
-- @lc app=leetcode id=1484 lang=mysql
--
-- [1484] Group Sold Products By The Date
--

-- @lc code=start
# Write your MySQL query statement below

select 
sell_date,
count(distinct(product)) as num_sold,
group_concat(distinct(product) order by product) as products
from activities
group by sell_date
order by sell_date;

-- @lc code=end

