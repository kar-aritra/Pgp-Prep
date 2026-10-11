// Sum of all prime numbers between 1 and n
//Given a positive integer n, compute and return the sum of all prime numbers between 1 and n (inclusive).
//A prime number is a natural number greater than 1 that has no positive divisors other than 1 and itself.  

class Solution {
  public:
    
    bool isPrime(int n){
        bool a = true;
       for(int i=2; i*i<=n;i++){
            if(n%i==0){
                a=false;
                break;
            }
        } 
        return a ;
    }
    int prime_Sum(int n) {
        // Code here
        int sum =0;
        if(n==3){
            sum =sum+2+3;
            return sum;
        }
        if(n==2){
            sum=sum+2;
            return sum;
        }
        if(n==1){
            return sum;
        }
        sum=sum+5;
        for(int i=4;i<=n;i++){
            if(isPrime(i)){
                sum =sum+i;
            }
        }
        return sum ;
    }
};