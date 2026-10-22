// Find missing number
// Given an integer array of size n containing distinct values in the range from 0 to n (inclusive), return the only number missing from 
// the array within this range.

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=0;
        int count =0;
        while(i<nums.size())
        {
            if(nums[i]==count){
                i++;count++;
            }
            else{
                break;
            }
        }
        return count ;
    }
};