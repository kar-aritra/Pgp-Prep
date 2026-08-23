// find all divisors of a number in ascending order 

class Solution {
  public:
    void print_divisors(int n) {
        // Code here.
        if(n<=1){
            cout<<n;
        }
        else{
            vector<int> ans ;
        for(int i=1;i*i<=n ; i++){
            if(n%i == 0){
                ans.push_back(i);
                int p= n/i;
                if(p!=i){
                    ans.push_back(p);
                }
            }
            else{
                continue ;
            }
        }
        
        sort(ans.begin(), ans.end());
        
        for(int i=0; i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        }
        
    }
};