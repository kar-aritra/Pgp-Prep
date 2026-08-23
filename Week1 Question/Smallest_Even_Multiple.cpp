// smallest even multiple

class Solution {
public:
    int smallestEvenMultiple(int n) {
        if(n<=2){
            return 2;
        }
        if(n%2==0){
            return n;
        }
        else{
            int a = n*2;
            return a ;
        }
        return 1 ;
    }
};