/*
 * @lc app=leetcode id=496 lang=cpp
 *
 * [496] Next Greater Element I
 */

// @lc code=start



class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        
        for (int i = 0 ; i < nums1.size() ; i++)
        {
            for (int j = 0 ; j < nums2.size(); j++)
            {
                if (nums1[i] == nums2[j])
                {
                    if (j == nums2.size()-1 )
                    {
                        ans.push_back(-1);
                        break;
                    }
                    else
                    {
                        for (int k = j ; k < nums2.size() ; k++)
                        {
                            if(nums2[k] > nums1[i])
                            {
                                ans.push_back(nums2[k]);
                                break;
                            }
                             if (k == nums2.size()-1)
                             {
                                  ans.push_back(-1);
                                   break;
                                 }
                            
                        }
                       

                    }
                    
                }
            }
        }
        return ans;
    }
};
// @lc code=end

