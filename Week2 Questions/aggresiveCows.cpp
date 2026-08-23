// Aggressive Cows


// nahi hua 
class Solution {
  public:
  
    bool isPossible(vector<int> stalls , int k , int mid ){
        int count=1;
        
        int lastpos = stalls[0];
        for(int i=0; i<stalls.size();i++){
            if(stalls[i]-lastpos >= mid){
                count ++;
            
            if(count ==k){
                return true ;
            }
            lastpos = stalls[i];
        }
        }
        
        return false;
    }
    
    int aggressiveCows(vector<int> &stalls, int k) {
        // code here
        sort(stalls.begin(),stalls.end());
        int start =0;
        int end = *max_element(stalls.begin(),stalls.end());
        
        int ans = -1;
        while(start <= end){
            int mid = start + (end-start)/2;
            if(isPossible(stalls , k , mid)){
                ans= mid ;
                start = mid + 1 ;
            }
            else{
                end = mid -1 ;
            }
        }
        
        return ans ;
    }
};