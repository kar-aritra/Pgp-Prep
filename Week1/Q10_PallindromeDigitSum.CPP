// Given a number n. Return true if the digit sum(or sum of digits) of n is a Palindrome number otherwise false.
// A Palindrome number is a number that stays the same when reversed

class Solution {
  public:
    
    bool checkPal(int sum){
        int count =0;
        int temp =sum;
        int b =0;
        while(temp>0){
            int a =temp%10;
            temp=temp/10;
            b=pow(10,count)*b+a;
            count++;
        }
        if(b==sum){
            return true ;
        }
        else{
            return false;
        }
    }
    
    bool isDigitSumPalindrome(int n) {
        // code here
        int sum =0;
        while(n>0){
            int a = n%10;
            sum = sum + a ;
            n=n/10;
        }
        if(checkPal(sum)){
            return true ;
        }
        else{
            false;
        }
    }
};