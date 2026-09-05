// LC 2413. Smallest Even Multiple

class Solution {
public:
    int smallestEvenMultiple(int n) {
        int a =n;int b =2;
        int gcd;
        if(a/b==0){
            gcd =a /b;
        }
        while(a%b>0){
            int r=a%b;
            a =b ; b =r ;
        }
        gcd =b;
        int ans = n*2/gcd;
        return ans ;
    }
};