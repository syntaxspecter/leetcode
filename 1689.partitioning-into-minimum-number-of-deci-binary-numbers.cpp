/*
 * @lc app=leetcode id=1689 lang=cpp
 *
 * [1689] Partitioning Into Minimum Number Of Deci-Binary Numbers
 */

// @lc code=start
class Solution {
public:
    int minPartitions(string n) {
        int max = 0;
        for (int i = 0 ; i < n.length() ; i++)
        {
            if (int(n[i]) - 48>max)
            max = int(n[i]) - 48;
        }
        return max;
    }
};

// @lc code=end

