//204. Count Primes

class Solution {
public:
    int countPrimes(int n) {
        int count =0;
        vector<bool> ans (n,1);
        if(n<=1){
            return count;
        }
        ans[0]=0;
        ans[1]=0;
        for(int i=2; i*i<n;i++){
            if(ans[i]==1){
                for(int j=i*i; j<n;j+=i){
                    ans[j]=0;
                }
            }
        }

        for(int i=2;i<n;i++){
            if(ans[i]==1){
                count ++;
            }
        }
        return count ;
    }
};
