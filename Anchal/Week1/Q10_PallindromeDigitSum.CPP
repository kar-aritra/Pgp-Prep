// Given a number n. Return true if the digit sum(or sum of digits) of n is a Palindrome number otherwise false.
// A Palindrome number is a number that stays the same when reversed

class Solution {
  public:
    int sum(int n){
        int ans =0;
        while(n>0){
            int a =n%10;
            ans = ans +a ;
            n=n/10;
        }
        return ans ;
    }
    
    int Reverse(int a ){
        int temp =a ;
        int p=0;
        int count =0;
        while(temp>0){
            p=p*pow(10,count)+temp%10;
            temp=temp/10;
            count ++;
        }
        return p;
    }
    
    bool isDigitSumPalindrome(int n) {
        // code here
        int a =sum(n);
        int b = Reverse(a);
        if(a==b){
            return true ;
        }
        return false;
    }
    
};