// Given two integers a and b, You have to compute their LCM and GCD and return an array containing their 
// LCM and GCD.

// had to see luv's apporach nahi hua khud se
class Solution {
  public:
  
    int gcd(int a , int b ){
        int r=min(a,b) ;
        while(a%b !=0){
            r = a%b;
            a=b;b=r;
        }
        return r ;
    }
    vector<int> lcmAndGcd(int a, int b) {
        // code here
        int x = gcd(a,b);
        int l= a*b/x;
        vector<int>lcm;
        lcm.push_back(l);
        lcm.push_back(x);
        
        return lcm;
    }
};