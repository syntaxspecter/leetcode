/*
 * @lc app=leetcode id=9 lang=cpp
 *
 * [9] Palindrome Number
 */

// @lc code=start
class Solution {
public:
    bool isPalindrome(int x) {
         if (x==0) return true;
        if(x<0 || x%10==0) return false;
       
        int temp = x ;
        int flag = 0 ;

        
       while(temp>flag || temp==flag)
        {   if(flag==temp) return true;
            flag = flag*10 + (temp%10);
            if(flag==temp) return true;
            temp/=10 ;
        }
     return false;
    }
};
// @lc code=end

