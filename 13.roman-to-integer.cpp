/*
 * @lc app=leetcode id=13 lang=cpp
 *
 * [13] Roman to Integer
 */

// @lc code=start
class Solution {
public:
     int value(char s){
        if(s == 'I'){
            return 1; 
        }
        else if(s == 'V'){
            return 5;
        }
        else if(s == 'X'){
            return 10;
        }
        else if(s == 'L'){
            return 50;
        }
        else if(s == 'C'){
            return 100;
        }
        else if(s == 'D'){
            return 500;
        }
        else if(s == 'M'){
            return 1000;
        }
        return -1 ; 
    }
    
    int romanToInt(string s) {
        int n = s.size() , i = 0 , s1 , s2 , res = 0  ;
        while(i < n)
        {
            s1 = value(s[i]) ; 
            if(i + 1 < n)
            {
                s2 = value(s[i+1]) ; 
                
                if(s1 >= s2)
                {
                    res += s1 ; 
                    i += 1 ;         
                }
                
                else
                {
                    res +=  s2 - s1; 
                    i += 2 ; 
                }       
            }
            
            else
            {
                res += s1 ; 
                i += 1 ; 
            }
        }
    return res ;
    }
};
// @lc code=end

