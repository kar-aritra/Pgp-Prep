// Wave Array Gfg

class Solution {
  public:
    void sortInWave(vector<int>& arr) {
        // code here
        int n = arr.size();
        bool a = true ;
        for(int i=0;i<n-1;i++){
            if(a){
                if(arr[i]<arr[i+1]){
                    swap(arr[i],arr[i+1]);
                    a=false;
                    continue;
                }
                else{
                    a=false;
                    continue;
                }
            }
            else{
                if(arr[i]>arr[i+1]){
                    swap(arr[i],arr[i+1]);
                    a= true ;
                }
                else{
                    a=true;
                }
            }
        }
    }
};