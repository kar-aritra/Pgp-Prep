// reverse a special string

// issue is tle due to some minor conceptual shortcomings


class Solution {
  public:
    string reverseEqn(string s) {
        // code here.
        string ans ="";
        string ab="";
        for(int i=s.size()-1; i>=0; i--){
            if(s[i]== '*' || s[i] == '-' || s[i] == '+' || s[i] =='/' ){
                reverse(ab.begin(),ab.end());
                // ans=ans+ab;(haag diya)
                ans.append(ab);
                ab="";
                // ans=ans+s[i];(haag diya)
                ans.push_back(s[i]);
            }
            if(s[i]>='0' && s[i]<='9'){
                ab= ab+s[i];
                if(i==0){
                    reverse(ab.begin(),ab.end());
                    ans=ans+ab;
                }
            }   
        }
        
        return ans ;
    }
};

// Every + creates a new string and copies all old data again.

// So your loop becomes:

// O(n²) instead of O(n)

// For big strings → TLE guaranteed.