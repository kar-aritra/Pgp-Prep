// Maximum Consecutive Ones
//Given a binary array nums, return the maximum number of consecutive 1s in the array.
//A binary array is an array that contains only 0s and 1s.

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count =0;
        int maxi= INT_MIN;
        for(int i=0; i<nums.size();i++){
            if(nums[i]==1){
                count++;
            }
            else{
                maxi = max(maxi,count);
                count =0;
            }
        }
        return max(maxi,count);
    }
};