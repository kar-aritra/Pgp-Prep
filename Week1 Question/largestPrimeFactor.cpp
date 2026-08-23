// find the largest prime factor in a number 


class Solution {
  public:
    
    bool isPrime(int a ){
        if(a<=1){
            return false;
        }
        if(a<=3){
            return true ;
        }
        for(long long  i=2; i<=sqrt(a);i++){
            if(a%i == 0){
                return false;
            }
        }
        return true ;
    }
    
    int largestPrimeFactor(int n) {
        // code here
        vector<int>ans;
        for(long long i=1; i<=sqrt(n); i++){
            if(n%i ==0){
                ans.push_back(i);
                long long  a = n/i;
                if(a!=i){
                    ans.push_back(a);
                }
            }
            else{
                continue;
            }
        }
        sort(ans.begin(),ans.end());
        for(long long  i=ans.size()-1;i>=0;i--){
            if(isPrime(ans[i])){
                return ans[i];
            }
        }
        return 1;
    }
};