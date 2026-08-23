// find lcm and gcd

// unable to do it 


//  we call it Euclidean Algorithm 
class Solution {
  public:
    
    int gcd(int a , int b ){
        while(a%b !=0){
            int r = a%b ;
            a=b ; b=r ;
        }
        return b ;
    }
    vector<int> lcmAndGcd(int a, int b) {
        // code here
        int p = gcd(a,b);
        
        int lcm = a*b/p;
        vector<int> ans ;
        ans.push_back(lcm);
        ans.push_back(p);
        
        return ans ;
    }
};