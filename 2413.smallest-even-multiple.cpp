/*
 * @lc app=leetcode id=2413 lang=cpp
 *
 * [2413] Smallest Even Multiple
 */

// @lc code=start
class Solution {
public:
    int smallestEvenMultiple(int n) {
        int i = n;
        while(i%n != 0 || i%2 != 0)
        {
            i++;
        }
        return i;
    }
};
// @lc code=end

