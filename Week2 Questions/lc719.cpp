// 719. Find K-th Smallest Pair Distance


class Solution {
public:

    int count(int mid,vector<int> nums){
        int count =0;
        for(int i=0; i<nums.size();i++){
            for(int j=i+1 ; j<nums.size();j++){
                if(nums[j]-nums[i]<=mid){
                    count++;
                }
            }
        }
        return count ;
    }

    int smallestDistancePair(vector<int>& nums, int k) {
        int start =0;
        sort(nums.begin(),nums.end());
        int end = nums[nums.size()-1]-nums[0];
        int ans =0;
        while(start <= end ){
            int mid = start +(end-start)/2;

            if(count(mid,nums)>=k){
                end= mid -1;
                ans= mid;
            }
            else{
                start = mid + 1 ;
            }
        }
        return ans;
    }
};

// do watch gpt solution its mind boggling 