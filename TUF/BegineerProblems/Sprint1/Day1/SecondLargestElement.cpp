// Second Largest Element
// Given an array of integers nums, return the second-largest element in the array. If the second-largest element does not exist, 
// return -1.

class Solution {
public:
    int secondLargestElement(vector<int>& nums) {
        //your code goes here
        if(nums.size()<=1){
            return -1;
        }
        int maxi=INT_MIN;
        for(int i=0;i<nums.size();i++){
            maxi=max(maxi,nums[i]);
        }
        int count =0;
        for(int j=0; j<nums.size();j++){
            if(nums[j]==maxi){
                count++;
                nums[j]=INT_MIN;
            }
        }
        if(count==nums.size()){
            return -1;
        }
        maxi=INT_MIN;
        for(int k=0;k<nums.size();k++){
            maxi=max(maxi,nums[k]);
        }
        return maxi;
    }
};