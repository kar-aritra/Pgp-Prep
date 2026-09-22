//Left Rotate Array by K Places
//Given an integer array nums and a non-negative integer k, rotate the array to the left by k steps.

class Solution {
public:
    vector<int> rotate(vector<int> & nums , int k){
        if(k>nums.size()){
            k=k%nums.size();
        }
        else if(k==nums.size()){
            return nums ;
        }
        reverse(nums.begin(),nums.end());
        vector<int>ans;
        int a ;
        for(int i=nums.size()-1;k>0;k--){
            a=nums[i];
            nums.pop_back();
            ans.push_back(a);
            i--;
        }
        reverse(nums.begin(),nums.end());
        for(int i=0;i<ans.size();i++){
            nums.push_back(ans[i]);
        }
        return nums;
    }
    void rotateArray(vector<int>& nums, int k) {
        rotate(nums,k);
    }
};