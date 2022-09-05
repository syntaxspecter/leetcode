--
-- @lc app=leetcode id=196 lang=mysql
--
-- [196] Delete Duplicate Emails
--

-- @lc code=start
# Please write a DELETE statement and DO NOT write a SELECT statement.
# Write your MySQL query statement below

DELETE p1 FROM Person p1 , Person p2
WHERE p1.id > p2.id AND p1.email=p2.email; 

-- @lc code=end

