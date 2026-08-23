// find if a number is armstrong or not 

// User function Template for C++
class Solution {
  public:
    bool armstrongNumber(int n) {
        // code here
        int temp = n ;
        int ans =0;
        while(temp>0){
            int a = temp%10;
            ans = ans + pow(a,3);
            temp=temp/10;
        }
        if(ans == n){
            return true ;
        }
        else{
            return false ;
        }
    }
};