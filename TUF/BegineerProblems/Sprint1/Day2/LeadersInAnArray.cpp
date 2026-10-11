// Leaders in an Array
// Given an integer array nums, return a list of all the leaders in the array.
// A leader in an array is an element whose value is strictly greater than all elements to its right in the given array. The rightmost
// element is always a leader. The elements in the leader array must appear in the order they appear in the nums array.

class Solution {
public:
    vector<int> leaders(vector<int>& nums) {
      vector<int> ans ;
      bool yes = true;
      for(int i=0; i<nums.size();i++)
      {
        yes=true;
        for(int j=i+1; j<nums.size();j++)
        {
            if(nums[i]<=nums[j])
            {
                yes = false;
                break;
            }
        }
        if(yes)
        {

            ans.push_back(nums[i]);
        }
      }
      return ans ;
    }
};

// this solution has tle 


// Optimized solution not been able to think. 

class Solution {
public:
    vector<int> leaders(vector<int>& nums) {
      vector<int> ans ;
      int maxi = nums[nums.size()-1];
      ans.push_back(maxi);
      for(int i=nums.size()-2;i>=0;i--)
      {
        int temp = maxi ;
        maxi = max(maxi,nums[i]);
        if(temp!=maxi)
        {
            ans.push_back(maxi);
        }
      }
      reverse(ans.begin(),ans.end());
      return ans ;
    }
};