// print muitplication table upto 10

// User function Template for C++
class Solution {
  public:
    vector<int> getTable(int n) {
        // Write Your Code here
        vector<int> ans ;
        for(int i=1; i<=10; i++){
            int a = n*i;
            ans.push_back(a);
        }
        
        return ans ;
    }
};