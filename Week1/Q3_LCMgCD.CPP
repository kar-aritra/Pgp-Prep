// Given two integers a and b, You have to compute their LCM and GCD and return an array containing their 
// LCM and GCD.

class Solution {
  public:
    
    int gcd(int a , int b ){
        int r ;
         while(b>0){
            r = a%b;
            a =b ;
            b = r ;
        }
        return a ;
    }
    vector<int> lcmAndGcd(int a, int b) {
        // code here
        int hcf= gcd(a,b) ;
        vector<int> ans ;
        int lcm = a*b /hcf ;
        ans.push_back(lcm);
        ans.push_back(hcf);
        
        return ans ;
    }
};