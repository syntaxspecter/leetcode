/*
 * @lc app=leetcode id=495 lang=cpp
 *
 * [495] Teemo Attacking
 */

// @lc code=start
class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int sum = duration;
    for(int i = 1 ; i < timeSeries.size() ; i++)
    {
        if (timeSeries[i]-timeSeries[i-1]<duration)
        sum += timeSeries[i]-timeSeries[i-1];
        else
        sum+=duration;
    }
    return sum;
        
    }
};
// @lc code=end

