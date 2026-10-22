// All Divisors of a Number
// Given an integer n, return all the divisors of n in the ascending order.



class Solution {
  public:
    vector<int> getDivisors(int n)
    {
        // code here
        bool a = true;
        vector<int>ans;
        if(n==1){
            ans.push_back(1);
            return ans ;
        }
        if(n<=3){
            ans.push_back(1);
            ans.push_back(n);
            return ans ;
        }
        for(int i=2; i*i<=n;i++)
        {
            if(n%i==0){
                a=true;
                break;
            }
            else{
                a=false;
            }
        }
        if(a==false)
        {
            ans.push_back(1);
            ans.push_back(n);
        }
        else
        {
            for(int i=1;i*i<=n;i++){
                if(i*i==n){
                    ans.push_back(i);
                }
                else if(n%i==0){
                    ans.push_back(i);
                    ans.push_back(n/i);
                }
            }
        }
        sort(ans.begin(),ans.end());
        return ans ;
    }
};