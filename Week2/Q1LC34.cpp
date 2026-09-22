// LC 34. Find First and Last Position of Element in Sorted Array

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int start =0;
        int end = nums.size()-1;
        int initial =-1;
        int ending =-1;
        while(start<=end){
            int mid = start +(end-start)/2;
            if(nums[mid]==target){
                initial=mid;
                end =mid -1;
            }
            else if(nums[mid]<target){
                start =mid+1;
            }
            else{
                end = mid -1 ;
            }
        }

        start =0;
        end = nums.size()-1;
        while(start<=end){
            int mid = start +(end-start)/2;
            if(nums[mid]==target){
                ending = mid ;
                start = mid + 1 ;
            }
            else if(nums[mid]<target){
                start = mid + 1;
            }
            else{
                end = mid -1 ;
            }
        }
        vector<int>ans ;
        ans.push_back(initial);
        ans.push_back(ending);

        return ans ;
    }
};

// else always belongs to last written if . its like 
// if (A)

// if (B)


// else 

// it will follow if(B) not if (A)