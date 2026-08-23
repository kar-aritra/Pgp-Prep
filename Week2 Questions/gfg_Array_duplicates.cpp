// Array Duplicates


class Solution {
  public:
    vector<int> findDuplicates(vector<int>& arr) {
        // code here
        vector<int>ans(arr.size()+1,0);
        vector<int> ans1 ;
        for(int i=0; i<arr.size();i++){
            ans[arr[i]]++;
        }
        for(int i=1; i<ans.size();i++){
            if(ans[i]>1){
                ans1.push_back(i); 
            }
        }
        return ans1 ;
    }
};