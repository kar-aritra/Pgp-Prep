// Largest prime factor
// Given a number n, your task is to find the largest prime factor of n.


class Solution {
  public:
    
    bool isPrime(int a){
        if(a==3){
            return true ;
        }
        if(a==2){
            return true ;
        }
        for(int i =2; i*i<=a;i++){
            if(a%i==0){
                return false;
            }
        }
        return true ;
    }
    int largestPrimeFactor(int n) {
        // code here
        int result =0;
        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                if(isPrime(i)){
                    result = max(result,i);
                }
                int a = n/i;
                if(isPrime(a)){
                    result = max(result,a);
                }
            }
        }
        if(isPrime(n)){
            result = max(result ,n);
        }
        return result;
    }
};