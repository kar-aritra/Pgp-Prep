// 154. Find Minimum in Rotated Sorted Array II


class Solution {
public:
    int findMin(vector<int>& nums) {
        int start = 0;
        int end = nums.size() - 1;
        int min;
        while (start <= end) {
            int mid = start + (end - start) / 2;
            if (nums[start] == nums[mid] && nums[mid] == nums[end]) {
                min = mid;
                start = start + 1;
                end = end - 1;
            } 
            else if (nums[end] < nums[start]) {
                // right
                if (nums[mid] > nums[end] || start > end) {
                    min = mid + 1;
                    start = mid + 1;
                } else {
                    end = mid;
                }
            } 
            else if (nums[end] > nums[start] || start == end) {
                return nums[start];
            }
            else{
                end=end-1;
                // start = start + 1 ;  // both valid 
            }
        }
        return nums[min];
    }
};