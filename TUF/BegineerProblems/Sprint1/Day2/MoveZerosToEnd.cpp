// Move Zeros to End
// Given an integer array nums, move all the 0's to the end of the array. The relative order of the other elements must remain the same.
// This must be done in place, without making a copy of the array.


class Solution {
public:
    void moveZeroes(vector<int>& nums) 
    {
        int place =-1;
        for(int i=0; i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                place =i;
                for(int j=i+1;j<nums.size();j++)
                {
                    if(j<nums.size() && nums[j]!=0)
                    {
                        swap(nums[place++],nums[j]);
                    }
                }
            }
        }
    }
};

// it caused tle 

class Solution {
public:
    void moveZeroes(vector<int>& nums) 
    {
       int pos =0;
       for(int i =0; i<nums.size();i++){
        if(nums[i]!=0){
            swap(nums[pos++],nums[i]);
        }
       }
    }
};

// just think simply sometimes 