/*
 * @lc app=leetcode id=1108 lang=cpp
 *
 * [1108] Defanging an IP Address
 */

// @lc code=start
class Solution {
public:
    string defangIPaddr(string address) {
 
        string ans;
        int i = 0 ; 
        int n =address.length();
        while(i<n)
        {
         if(address[i]=='.')
         {
             ans.push_back('[');
             ans.push_back('.');
             ans.push_back(']');
         }
        else
        {
            ans.push_back(address[i]);
        }
            i++;
        }
        return ans;
    }
};
// @lc code=end

