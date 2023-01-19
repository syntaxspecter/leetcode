class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        sort(strs.begin(),strs.end());
        string s1 = strs[strs.size()-1];
         string s2 = strs[0];
        int n = s1.length();
         string ans ="";
        for (int i = 0 ; i <n ; i++)
        {
            if(s1[i]==s2[i])
            {
                ans+=s1[i];
            }
            else break;
        }
        
        return ans;
    }
};
