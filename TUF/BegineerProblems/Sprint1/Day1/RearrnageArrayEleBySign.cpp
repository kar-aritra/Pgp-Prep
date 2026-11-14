// Rearrange array elements by sign
// Given an integer array nums of even length consisting of an equal number of positive and negative integers.Return the answer array 
//in such a way that the given conditions are met:
// Every consecutive pair of integers have opposite signs.
// For all integers with the same sign, the order in which they were present in nums is preserved.
// The rearranged array begins with a positive integer.

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> ans1;
        vector<int> ans2 ;
        vector<int> ans3 ;
        for(int i=0; i<nums.size();i++)
        {
            if(nums[i]>0)
            {
                ans1.push_back(nums[i]);
            }
            else
            {
                ans2.push_back(nums[i]);
            }
        }
        int p=nums.size()/2;
        for(int j=0; j<p;j++)
        {
            ans3.push_back(ans1[j]);
            ans3.push_back(ans2[j]);
        }
        return ans3;
    }
};