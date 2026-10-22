// You are given a 3-digit number n, Find whether it is an Armstrong number or not.
// An Armstrong number of three digits is a number such that the sum of the cubes of its digits is equal
// to the number itself. 371 is an Armstrong number since 33 + 73 + 13 = 371. 

class Solution {
  public:
    bool armstrongNumber(int n) {
        // code here
        int temp=n;
        int sum=0;
        while(temp>0){
            int a = temp%10;
            sum =sum+ pow(a,3);
            temp=temp/10;
        }
        if(n==sum){
            return true ;
        }
        else{
            return false;
        }
        return false;
    }
};