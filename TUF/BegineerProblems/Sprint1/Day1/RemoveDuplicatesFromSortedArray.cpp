// Remove duplicates from sorted array
// Given an integer array nums sorted in non-decreasing order, remove all duplicates in-place so that each unique element appears only once.

// Return the number of unique elements in the array.

// If the number of unique elements be k, then,

// Change the array nums such that the first k elements of nums contain the unique values in the order that they were present originally.
// The remaining elements, as well as the size of the array does not matter in terms of correctness.
// The driver code will assess correctness by printing and checking only the first k elements of the modified array.
// An array sorted in non-decreasing order is an array where every element to the right of an element is either equal to or greater
// in value than that element.

class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        int count =0;
        int j=0;
        int k=1;
        while(j<nums.size() && k<nums.size())
        {
            while(k<nums.size())
            {
                if(nums[j]!=nums[k])
                {
                    swap(nums[j+1],nums[k]);
                    j=j+1;
                    k++;
                    count++;
                    break;
                }
                else
                {
                    k++;
                }
            }
        }
        count++;
        return count ;
    }
};