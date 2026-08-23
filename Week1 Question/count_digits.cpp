// find if the number is divisible by its digits 

class Solution {
  public:
    // Function to count the number of digits in n that evenly divide n
    int evenlyDivides(int n) {
        // code here
        int temp=n;
        int count =0;
        while(temp>0){
            int a = temp%10;
            if( a!=0 && n%a == 0 ){
               count ++;
               temp=temp/10;
            }
            else{
                temp=temp/10;
                continue ;
            }
        }
        return count ;
    }
};