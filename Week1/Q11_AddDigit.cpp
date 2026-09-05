// 258. Add Digits

class Solution {
public:
    int addDigits(int num) {
        int count =0;
        while(num>0){
            count = count + num%10;
            num=num/10;
            if(num==0 && count >=10){
                num=count;
                count =0;
            }
            else if(num==0){
                return count ;
            }
            else{
                continue;
            }
        }
        return count ;
    }
};