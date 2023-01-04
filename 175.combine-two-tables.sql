--
-- @lc app=leetcode id=175 lang=mysql
--
-- [175] Combine Two Tables
--

-- @lc code=start
# Write your MySQL query statement below
select FirstName, LastName, City, State
from Person as p left join Address as a
on p.PersonId = a.PersonId
;

-- @lc code=end

