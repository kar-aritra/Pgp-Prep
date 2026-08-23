// add digits of a number till only single digit is left 

class Solution {
public:
    long long  sumDigits(int a ){
        int sum =0;
        while(a>0){
            int b = a%10;
            sum=sum+b;
            a=a/10;
        }
        return sum;
    }
    int addDigits(int num) {
        int a =sumDigits(num);
        while(sumDigits(a)>=10){
            a=sumDigits(a);
        }   
        return sumDigits(a);    
    }
};