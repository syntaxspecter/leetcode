--
-- @lc app=leetcode id=595 lang=mysql
--
-- [595] Big Countries
--

-- @lc code=start
# Write your MySQL query statement below

SELECT name , population , area 
FROM World
WHERE population >= 25000000 OR area >= 3000000 ;

-- @lc code=end

