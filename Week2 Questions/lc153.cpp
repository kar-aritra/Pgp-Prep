// 153. Find Minimum in Rotated Sorted Array


class Solution {
public:
    int findMin(vector<int>& nums) {
        int start =0;
        int end =nums.size()-1;
        int min;
        while(start<=end){
            int mid = start +(end-start)/2;
            if(nums[end]<nums[start]){
                // right
                if(nums[mid]>nums[end]|| start>end){
                    min=mid+1;
                    start = mid+1;
                }
                else{
                    end=mid;
                }
            }
            else if(nums[end]>nums[start] || start == end ){
                return nums[start];
            }
        }
        return nums[min];
    }
};