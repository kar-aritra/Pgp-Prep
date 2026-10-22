//Reversing the equation
// Solved
// Difficulty: EasyAccuracy: 58.61%Submissions: 35K+Points: 2
// Given a mathematical equation that contains only numbers and +, -, *, /. Print the equation in reverse, such that the equation is
// reversed, but the numbers remain the same.
// It is guaranteed that the given equation is valid, and there are no leading zeros.

class Solution {
  public:
    string reverseEqn(string s) {
        // code here.
        string ans ="";
        string a ="";
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]>='0'&& s[i]<='9'){
                a=a+s[i];
            }
            else{
                reverse(a.begin(),a.end());
                // reverse returns void type always remmeber it 
                ans=ans+a;
                a="";
                ans=ans+s[i];
            }
        }
        if(a!=""){
            reverse(a.begin(),a.end());
            ans=ans+a;
        }
        return ans ;
    }
};