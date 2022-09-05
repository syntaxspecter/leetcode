--
-- @lc app=leetcode id=1873 lang=mysql
--
-- [1873] Calculate Special Bonus
--

-- @lc code=start
# Write your MySQL query statement below

SELECT employee_id , IF (employee_id % 2 = 1 AND name NOT LIKE ('M%') ,salary , 0) AS bonus 
FROM Employees
ORDER BY employee_id;

-- @lc code=end

