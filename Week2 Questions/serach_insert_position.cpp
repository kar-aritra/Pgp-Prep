// 35. Search Insert Position

class Solution {
public:

    int bs(vector<int>nums,int target,int & ans){
        int start = 0;
        int end =nums.size()-1;
        while(start<=end){
            int mid = start +(end-start)/2;
            if(nums[mid]<target){
                start = mid+1;
            }
            else if(nums[mid]>target){
                end = mid -1 ;
            }
            else{
                ans=mid;
                return ans ;
            }
        }
        return ans ;
    }

    int qs(vector<int>nums,int target,int & ans){
        int start = 0;
        int end =nums.size()-1;
        if(target<nums[0]){
            return 0;
        }
        if(target>nums[nums.size()-1]){
            return nums.size();
        }
        while(start<=end){
            int mid = start+(end-start)/2;
            if(nums[mid]>target){
                if(nums[mid-1]>target){
                    ans=mid-1;
                }
                end=mid-1;
            }
            else{
                start = mid+1 ;
                if(nums[mid+1]>target){
                    ans=mid+1;
                }
            }
        }
        return ans ;
    }

    int searchInsert(vector<int>& nums, int target) {
        int ans =-1;
        ans=bs(nums,target,ans);
        if(ans!=-1){
            return ans ;
        }
        else{
            ans = qs(nums,target,ans);
        }
        return ans ;
    }
};