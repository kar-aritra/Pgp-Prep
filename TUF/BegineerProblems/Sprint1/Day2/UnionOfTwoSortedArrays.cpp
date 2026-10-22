// Union of two sorted arrays
// Given two sorted arrays nums1 and nums2, return an array that contains the union of these two arrays. The elements in the union must be 
// in ascending order.
// The union of two arrays is an array where all values are distinct and are present in either the first array, the second array, or both.


class Solution {
public:
    vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
        int i=0; int j=0;
        vector<int> ans ;
        int count =0;
        while(i<nums1.size() && j<nums2.size())
        {
            if(nums1[i]==nums2[j])
            {
                if(count==0 )
                {
                    ans.push_back(nums1[i]);
                    count++;
                }
                else if(ans[count-1]!=nums1[i])
                {
                    ans.push_back(nums1[i]);
                    count++;
                }
                i++;j++;
            }
            else if(nums1[i]<nums2[j])
            {
                if(count ==0 )
                {
                    ans.push_back(nums1[i]);
                    count ++;
                }
                else if( ans[count-1]!=nums1[i])
                {
                    ans.push_back(nums1[i]);
                    count++;
                }
                i++;
            }
            else 
            {
                if(count == 0)
                {
                    ans.push_back(nums2[j]);
                    count ++;
                }
                else if( ans[count-1]!=nums2[j])
                {
                    ans.push_back(nums2[j]);
                    count++;
                }
                j++;
            }
        }
        if(i==nums1.size())
        {
            for(;j<nums2.size();j++)
            {
                if(count ==0 )
                {
                    ans.push_back(nums2[j]);
                    count ++;
                }
                else if(ans[count-1]!=nums2[j])
                {
                    ans.push_back(nums2[j]);
                    count++;
                }
            }
        }
        else
        {
            for(; i<nums1.size();i++)
            {
                if(count ==0)
                {
                    ans.push_back(nums1[i]);
                    count++;
                }
                if(ans[count-1]!=nums1[i])
                {
                    ans.push_back(nums1[i]);
                    count++;
                }
            }
        }
        return ans;
    }
};

// always remember to check segmentation fault because u have a dumb tendency to check out of bound indexes. 
