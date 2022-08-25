--
-- @lc app=leetcode id=1965 lang=mysql
--
-- [1965] Employees With Missing Information
--

-- @lc code=start
# Write your MySQL query statement below
select employee_id from employees
    where employee_id not in(
        select employee_id from salaries
    )
union
select employee_id from salaries
    where employee_id not in(
        select employee_id from employees
    )
order by employee_id

-- @lc code=end

