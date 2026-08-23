//  Pow(x, n)

// tle

class Solution {
public:
    double myPow(double x, int n) {
        double ans=1;
        if(x==1){
            return ans ;
        }
        long long N= n;
        if(N<0){
            N=-N;
        }
        while(N>0){
            if(N%2==0){
                x=x*x;
                N=N/2;
            }
            else{
                ans=ans*x;
                N=N-1;
            }
        }
        if(n<0){
            double a =1/ans;
            return a ;
        }
        return ans ;
    }
};