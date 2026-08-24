// Given a positive integer n, find the number of perfect squares that are less than n in the sample
// space of perfect squares. The sample space consists of all perfect squares starting
// from 1 (i.e., 1, 4, 9, 16, 25, …)

class Solution {
  public:
    int countSquares(int n) {
        // code here
        int count1 = sqrt(n);
        if(count1*count1 == n ){
            return count1 -1 ;
        }
        return count1 ;
    }
};