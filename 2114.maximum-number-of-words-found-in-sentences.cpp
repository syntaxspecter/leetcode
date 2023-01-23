/*
 * @lc app=leetcode id=2114 lang=cpp
 *
 * [2114] Maximum Number of Words Found in Sentences
 */

// @lc code=start
class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int max = 0;
        for (int i = 0 ; i < sentences.size() ; i++)
        {int j = 0 , c= 0;
                while(j < sentences[i].length() )
                {
                    if(sentences[i][j]==' ')
                    c++;
                    j++;
                }
                if(c > max)
                max = c ;
            
        }
    return max+1;
    }
};
// @lc code=end

