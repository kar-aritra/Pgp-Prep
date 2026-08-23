// number of common factors

class Solution {
public:
    int commonFactors(int a, int b) {
        vector<int>ans(1002,0);
        for(int i=1;i<=a;i++){
            if(a%i == 0){
                ans[i]=1;
            }
            else{
                continue;
            }
        }
        int count =0;
        for(int i=1; i<=b;i++){
            if(b%i == 0 && ans[i]==1){
                count++;
            }
        }
        return count ;
    }
};