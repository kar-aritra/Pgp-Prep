

class Solution {
  public:
    vector<int> getDivisors(int n) {
        // code here
        vector<int>ans;
        vector<int>ans1(n+1,0);
        if(n==1){
            ans.push_back(1);
            return ans ;
        }
        for(int i=1;i<=n/2;i++){
            if(ans1[i]!=-1 && n%i==0){
                ans.push_back(i);
                ans1[i]=-1;
                int a =n/i;
                if(ans1[a]==0){
                    ans.push_back(a);
                    ans1[a]=-1;
                }
                else{
                    exit;
                }
            }
        }
        sort(ans.begin(),ans.end());
        return ans ;
    }
};