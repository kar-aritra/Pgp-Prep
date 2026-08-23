// find if sum of digits of a number is palindrome or not 

// User function Template for C++

class Solution {
  public:
  
    bool Plaindrome(int a ){
        int temp=a;
        int rev=0;
        int count =0;
        while(a>0){
            int b =a%10;
            rev= rev*pow(10,count++)+b;
            a=a/10;
        }
        if(temp==rev){
            return true ;
        }
        return false;
    }
    
    int sum(int a){
        int sum1=0;
        while(a>0){
            int b=a%10;
            sum1=sum1+b;
            a=a/10;
        }
        return sum1;
    }
    
    bool isDigitSumPalindrome(int n) {
        // code here
            int a = sum(n);
            if(Plaindrome(a))
            {
                return true ;
            }
            else
            {
                return false ;
            }
        return true ;
    }
};