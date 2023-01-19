/*
 * @lc app=leetcode id=1313 lang=cpp
 *
 * [1313] Decompress Run-Length Encoded List
 */

// @lc code=start
class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {

        vector<int> ans ;
        
        for (int i = 0 ; i < nums.size() ; i= i +2)
        {
            while(nums[i]>0)
            {
                ans.push_back(nums[i+1]);
                nums[i]--;
            }
           

        }
        return ans;
        
    }
};
// @lc code=end

