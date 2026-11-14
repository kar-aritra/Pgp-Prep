// Majority Element-I
// Given an integer array nums of size n, return the majority element of the array.
// The majority element of an array is an element that appears more than n/2 times in the array. The array is guaranteed to have a 
// majority element.

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int count =0;
        int maxi=INT_MIN;
        int i=0;int j=i;
        int ans=nums[i];
        while(i<nums.size())
        {

            if(j<nums.size() && nums[j]==nums[i])
            {
                count++;
                j++;
            }
            else
            {
                int temp = maxi;
                maxi=max(maxi,count);
                if(temp!=maxi)
                {
                    ans=nums[i];
                }
                count =0;
                i=j;
            }
        }
        maxi=max(maxi,count);
        return ans ;
    }
};