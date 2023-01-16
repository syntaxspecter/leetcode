/*
 * @lc app=leetcode id=2535 lang=cpp
 *
 * [2535] Difference Between Element Sum and Digit Sum of an Array
 */

// @lc code=start
class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum =0 , numsum = 0;
        for(int i = 0 ; i < nums.size() ; i++)
        {
            sum += nums[i];
            while(nums[i]>0)
            {
                numsum += nums[i]%10;
                nums[i] = nums[i]/10;
            }
        }

        return (abs(numsum-sum));
        
    }
};
// @lc code=end

