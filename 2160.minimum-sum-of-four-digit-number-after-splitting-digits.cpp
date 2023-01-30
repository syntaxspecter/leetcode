/*
 * @lc app=leetcode id=2160 lang=cpp
 *
 * [2160] Minimum Sum of Four Digit Number After Splitting Digits
 */

// @lc code=start
class Solution {
public:
    int minimumSum(int num) {
        vector<int>arr;
        while(num>0)
        {
            arr.push_back(num%10);
            num=num/10;
        }
         sort(arr.begin(), arr.end());

         int ans = 0;

        ans= (arr[0]*10+arr[2])+(arr[1]*10+arr[3]);
        return ans;
    }
};
// @lc code=end

