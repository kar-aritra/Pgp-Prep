// LC 2427. Number of Common Factors

class Solution {
public:
    int commonFactors(int a, int b) {
        int mini= min(a,b);
        int maxi = max(a,b);
        vector<int>ans(1001,0);
        for(int i=1; i<=mini; i++){
            if(mini%i==0){
                ans[i]=1;
            }
        }
        int count =0;
        for(int j=1;j<=mini;j++){
            if(maxi%j==0 && ans[j]==1){
                count ++;
            }
        }
        return count ;
    }
};