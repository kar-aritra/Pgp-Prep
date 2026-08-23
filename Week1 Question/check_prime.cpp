// check if prime or not

class Solution {
  public:
    bool isPrime(int n) {
        // code here
        if(n<=1){
            return false;
        }
        if(n<=3){
            return true;
        }
        for(int i=2; i*i<=n;i++){
            if(n%i == 0){
                return false;
            }
            else{
                continue;
            }
        }
        return true;
    }
};
