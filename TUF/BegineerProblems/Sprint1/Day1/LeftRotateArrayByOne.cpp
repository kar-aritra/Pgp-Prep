// Left Rotate Array by One
// Given an integer array nums, rotate the array to the left by one.


class Solution {
public:
    vector<int> updateNums(vector<int>& nums){
        if(nums.size()<=1){
            return nums ;
        }
        for(int i=0;i<nums.size()-1;i++){
            swap(nums[i],nums[i+1]);
        }
        return nums ;
    }

    void rotateArrayByOne(vector<int>& nums) {
        updateNums(nums);
    }
};