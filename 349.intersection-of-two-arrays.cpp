/*
 * @lc app=leetcode id=349 lang=cpp
 *
 * [349] Intersection of Two Arrays
 */

// @lc code=start
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
         vector<int> ans ;
        for (int i = 0 ; i < nums1.size() ; i++)
        {
            for (int j = 0 ; j < nums2.size() ; j++)
            {
                if(nums1[i]==nums2[j])
                {
                    ans.push_back(nums1[i]) ;
                }

            }
        }

       for (unsigned int i = 1 ; i < ans.size(); ++i) {
        for (unsigned int k = 0 ; k < i; ++k) {
         if ( ans.at(i) == ans.at(k) ) {
            //remove element if already present
            ans.erase(ans.begin() + i);
            --i;
            break;
         }
      }
   }

   return ans;
        
    }
};
// @lc code=end

