--
-- @lc app=leetcode id=608 lang=mysql
--
-- [608] Tree Node
--

-- @lc code=start
# Write your MySQL query statement below

SELECT id , 
case when p_id is null then "Root"
  when id in (Select Distinct p_id from tree) then "Inner"
  else "Leaf"
  end
  as type
FROM tree
  


-- @lc code=end

