// 35. Search Insert Position

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int start =0;
        int end = nums.size()-1;
        int ans=0 ;
        while(start<=end){
            int mid = start +(end-start)/2;
            if(nums[mid]==target){
                return mid ;
            }
            else if((mid+1) <nums.size() && nums[mid]<target && nums[mid+1]>target){
                ans=mid+1 ;
                start =mid+1;
            }
            else if((mid+1)>=nums.size() && nums[mid]<target){
                ans = mid+1;
                return ans ;
            }
            else if(nums[mid]<target){
                start =mid+1;
            }
            else if((mid-1) >=0 && nums[mid]>target && nums[mid-1]>target){
                ans =mid-1;
                end=mid-1;
            }
            else{
                ans=mid;
                end = mid-1;
            }
        }
        if(ans==-1){
            ans=0;
        }
        return ans ;
    }
};