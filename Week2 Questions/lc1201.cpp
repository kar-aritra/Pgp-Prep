// 1201. Ugly Number III


class Solution {
public:

    long long lcm_ll(long long a , long long b ){
        return (a*b)/__gcd(a,b);
    }

    int nthUglyNumber(int n, int a, int b, int c) {
        long long start = 1 ;
        long long end = 2e9;

        long long x = lcm_ll(a,b);
        long long y = lcm_ll(b,c);
        long long z = lcm_ll(c,a);
        long long w = lcm_ll(a,y);

        long long ans =-1;

        while(start <= end ){
            long long mid = start + (end-start)/2;

            long long count = mid/a + mid/b + mid/c - mid/x - mid/y - mid/z + mid/w;
            if(count <n ){
                start = mid + 1 ;
            }
            else if(count >n){
                end = mid -1 ;
            }
            else{
                end = mid -1 ;
                ans = mid  ;
            }
        }
        return ans ;
    }
};