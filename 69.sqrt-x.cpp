/*
 * @lc app=leetcode id=69 lang=cpp
 *
 * [69] Sqrt(x)
 */

// @lc code=start
class Solution {
public:
    int mySqrt(int x) {

unsigned int ans = 0 ;
        if (x == 0) {ans = 0 ;}
        if (x == 1 || x == 2 || x ==3) {ans = 1;}

        for (unsigned int i = 2 ; i <= (x/2)+1 ; i++)
        {
            if(x == i * i)
           { ans = i; break; }
            else if(x < i * i)
           { ans = i-1; break;}
        }
        return ans;
    }
};
// @lc code=end

