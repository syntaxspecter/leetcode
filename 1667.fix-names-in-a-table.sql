--
-- @lc app=leetcode id=1667 lang=mysql
--
-- [1667] Fix Names in a Table
--

-- @lc code=start
# Write your MySQL query statement below

Select user_id , CONCAT( UPPER(Substring(name,1,1)) , LOWER(Substring(name , 2 , LENGTH(name)))) as name 
From Users
Order By user_id;

-- @lc code=end

