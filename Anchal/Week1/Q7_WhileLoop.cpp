// Given a number x, the task is to print the numbers from x to 0 in decreasing order in a single line.

class Solution {
  public:
    void utility(int x) {
        // code here
        while(x>=0){
            cout<<x--<<" ";
        }
    }
};