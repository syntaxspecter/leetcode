/*
 * @lc app=leetcode id=1678 lang=cpp
 *
 * [1678] Goal Parser Interpretation
 */

// @lc code=start
class Solution {
public:
    string interpret(string command) {
        string ans = ""; //contains answer string
        int i = 0;
        while(i<(command.length()))
        {
            if (command[i]=='G'){ //checking if the character is"G"
                ans.push_back('G');
                i++;
            }
            if (command[i]=='(' && command[i+1]==')')//checking if the character sequence is "()"

            {
                ans.push_back('o');
                i = i+2;
            }
            if(command[i]=='(' && command[i+1]=='a')//checking if the character sequence is "(a"
            {
                ans.push_back('a');
                ans.push_back('l');
                i=i+4;
            }
            
        }
        return ans;
    }
};
// @lc code=end

