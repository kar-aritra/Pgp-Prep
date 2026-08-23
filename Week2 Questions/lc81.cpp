// 81. Search in Rotated Sorted Array II

// almst hua . pro tip- handle edge cases seperately sometimes if needed 

class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int start =0;
        int end = nums.size()-1;

        while(start<=end){
            int mid = start +(end-start)/2;
            if(nums[mid]==target){
                return true ;
            }
            if(nums[mid]== nums[start] && nums[mid]==nums[end]){
                start = start + 1 ;
                end= end -1 ;
                continue ;
            }
            else if(nums[mid]<=nums[end]){
                if(nums[mid]<target && target<=nums[end]){
                    start = mid+1;
                }
                else{
                    end=mid-1;
                }
            }
            else{
                if(target>=nums[start] && target<nums[mid]){
                    end=mid-1;
                }
                else{
                    start = mid + 1 ;
                }
            }
        }
        return false;
    }
};