// sum of all prime numbers between 1 and n 

// User function Template for C++

class Solution {
  public:
    
    bool(isPrime(int a )){
        if(a<=1){
            return false;
        }
        if(a<=3){
            return true ;
        }
        for(int i=2;i*i<=a;i++){
            if(a%i == 0){
                return false;
            }
            else{
                continue;
            }
        }
        return true;
    }
    
    int prime_Sum(int n) {
        // Code here
        int sum =0;
        for(int i=0;i<=n;i++){
            if(isPrime(i)){
                sum = sum+i;
            }
            else{
                continue;
            }
        }
        
        return sum;
    }
};