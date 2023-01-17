class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<int> ans (123 , 0);
        for(int i = 0 ; i < sentence.length(); i++ )
        {
            ans[sentence[i]] = 1;
        }

        for(int i = 97 ; i <= 122; i++ )
        {
            if(ans[i]==0)
            return false;
        }
        return true;
    }
};
