// find peak element 

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int start = 0;
        int end = nums.size()-1;
        while(start<=end){
            int mid = start +(end-start)/2;
            if(mid== start && mid==end){
                return mid;
            }
            if(mid== start){
                if(nums[mid]>nums[mid+1]){
                    return mid;
                }
                else{
                    start = mid+1;
                }
            }
            else if(nums[mid]>nums[mid-1]){
                if(nums[mid]>nums[mid+1]){
                    return mid ;
                }
                else{
                    start = mid + 1 ;
                }
            }
            else{
                end=mid-1;
            }
        }
        return -1;
    }
};