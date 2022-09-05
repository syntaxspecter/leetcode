--
-- @lc app=leetcode id=1527 lang=mysql
--
-- [1527] Patients With a Condition
--

-- @lc code=start
# Write your MySQL query statement below

SELECT patient_id , patient_name , conditions
FROM Patients
WHERE conditions LIKE ('% DIAB1%') OR conditions LIKE ('DIAB1%')


-- @lc code=end

