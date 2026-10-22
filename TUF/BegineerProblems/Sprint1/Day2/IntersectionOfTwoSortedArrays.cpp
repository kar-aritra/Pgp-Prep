// Intersection of two sorted arrays
// Given two sorted arrays, nums1 and nums2, return an array containing the intersection of these two arrays. Each element in the result
// must appear as many times as it appears in both arrays; that is, if an element appears x times in nums1 and y times in nums2, it should
// appear min(x, y) times in the result.

// The intersection of two arrays is an array where all values are present in both arrays.

class Solution {
public:
    vector<int> intersectionArray(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans ;
        int i=0; int j=0; int count =0;
        while(i<nums1.size() && j<nums2.size())
        {
            if(nums1[i]==nums2[j])
            {
                if(count==0)
                {
                    ans.push_back(nums1[i]);
                    count ++;
                    i++;j++;
                }
                else
                {
                    ans.push_back(nums1[i]);
                    count ++; i++;j++;
                }
            }
            else if(nums1[i]<nums2[j])
            {
                i++;
            }
            else
            {
                j++;
            }
        }
        return ans ;
    }
};