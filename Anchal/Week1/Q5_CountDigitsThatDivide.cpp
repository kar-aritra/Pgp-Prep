// Digits in N that Divide it
// Given a non-negative integer s represented as a string, count the number of digits in s that divide the number 
// represented by s.

// A digit is considered valid only if it is non-zero and the number represented by s is divisible by that digit.

// If a digit appears multiple times in s, each occurrence should be counted separately.

// pura khud se nahi hua 
class Solution {
  public:
    int divisibleByDigits(string& s) {
        // code here
        int count=0;
        vector<int>ans(10,0);
        for(int i=0;i<s.size();i++){
            int a = s[i]-'0';
            int r=0;
            if(a==0){
                continue;
            }
            else if(ans[a]==1){
                count++;continue;
            }
            else if(ans[a]==-1){
                continue;
            }
            else{
                for(int j=0; j<s.size();j++){
                    int b = s[j]-'0';
                    r= r*10+b;
                    r=r%a;
                }
                if(r==0){
                    count++;
                    ans[a]=1;
                }
                else{
                    ans[a]=-1;
                }
            }
        }
        return count ;
    }
};
// clever approach . tc O(n) sc O(1). But still these type of approach in large project will still cost few crores
// more we dont want that .


// better approach
// next revision try it 
// divide in similar fashion for 1-9 as it is the optimal approach , less query more savings 