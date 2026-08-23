// Given a positive integer n, find the number of perfect squares that are less than n in the sample
// space of perfect squares. The sample space consists of all perfect squares starting
// from 1 (i.e., 1, 4, 9, 16, 25, …)

class Solution {
  public:
    int countSquares(int n) {
        // code here
        int count =0;
        for(int i=1;i<=sqrt(n);i++){
            if(i*i<n){
                count++;
            }
        }
        return count ;
    }
};