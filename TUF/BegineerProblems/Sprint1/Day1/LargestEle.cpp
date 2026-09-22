// Largest Element
// Given an array of integers nums, return the value of the largest element in the array

class Solution {
public:
    int largestElement(vector<int>& nums) {
        int maxi = INT_MIN;
        for(int i=0; i<nums.size();i++){
            maxi = max(maxi,nums[i]);
        }
        return maxi;
    }
};