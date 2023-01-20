/*
 * @lc app=leetcode id=1512 lang=cpp
 *
 * [1512] Number of Good Pairs
 */

// @lc code=start
class Solution {
public:
    
    
    
    int numIdenticalPairs(vector<int>& nums) {
        
       int ans=0;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]==nums[j])
                {ans++;continue;}
            }
        }
        return ans;
    }
};
// @lc code=end

