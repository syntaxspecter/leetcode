--
-- @lc app=leetcode id=1757 lang=mysql
--
-- [1757] Recyclable and Low Fat Products
--

-- @lc code=start
# Write your MySQL query statement below

SELECT product_id FROM Products
WHERE low_fats = 'y' AND recyclable ='y';

-- @lc code=end

