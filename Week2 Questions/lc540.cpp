// 540. Single Element in a Sorted Array

// nahi hua ( but my own 3 year old solution was fire )


class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int start =0;
        int end = nums.size()-1;
        while(start <= end ){
            int mid = start +(end-start)/2;
            if(start == end){
                return nums[mid];
            }
            if(mid% 2 == 0){
                if(nums[mid]==nums[mid-1]){
                    end=mid-2;
                }
                else if(nums[mid]==nums[mid+1]){
                    start =mid+2;
                }
                else{
                    return nums[mid];
                }
            }
            else{
                if(nums[mid]==nums[mid-1]){
                    start = mid + 1 ;
                }
                else if(nums[mid]==nums[mid+1]){
                    end=mid-1;
                }
                else{
                    return nums[mid];
                }
            }
        }
        return 0;
    }
};