// Multiply Two Strings

// Given two numbers as strings s1 and s2. Calculate their Product.
// Note: The numbers can be negative and You are not allowed to use any built-in function or convert the strings to integers. 
//There can be zeros in the begining of the numbers. You don't need to specify '+' sign in the begining of positive numbers.

//  khud se nahi hua 

class Solution {
  public:
    string multiplyStrings(string &s1, string &s2) {
        // code here
        int size = s1.size()+s2.size();
        vector<int> ans (size,0);
        
        bool isNeg=false;
        if(s1[0]=='-'){
            isNeg = !isNeg;
            s1 =s1.substr(1);
        }
        if(s2[0]=='-'){
            isNeg = !isNeg;
            s2=s2.substr(1);
        }
        reverse(s1.begin(),s1.end());
        reverse(s2.begin(),s2.end());
        
        for(int i=0;i<s2.size(); i++){
            for(int j=0; j<s1.size(); j++){
                ans[i+j] +=(s2[i]-'0')*(s1[j]-'0');
                ans[i+j+1] += ans[i+j]/10;
                ans[i+j] %=10;
            }
        }
        
        string result ="";
        
        bool zero = true;
        for(int p= ans.size()-1; p>=0;p--){
            if(ans[p]!=0){
                zero=false;
            }
            if(!zero){
                result +=(ans[p]+'0');
            }
        }
        
        if (result.empty()) {
            return "0";
        }
        if(isNeg){
          result = "-"+result;  
        }
        return result;
    }
};