// 378. Kth Smallest Element in a Sorted Matrix

class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) 
    {
        vector<int> ans ;
        for(int i=0; i<matrix.size();i++)
        {
            for(int j=0; j<matrix[0].size();j++)
            {
                ans.push_back(matrix[i][j]);
            }
        }

        int n = ans.size();
        int start =*min_element(ans.begin(),ans.end());
        int end = *max_element(ans.begin(),ans.end());
        while(start <= end ){
            int mid = start +(end-start)/2;

            int countless=0;
            int countequal =0;
            for(int i=0; i<ans.size();i++){
                if(ans[i]<mid){
                    ++countless;
                }
                else if(ans[i]== mid){
                    ++countequal;
                }
            }

            if(countless>= k){
                end = mid -1 ;
            }
            else if(countless < k && countless + countequal >= k){
                return mid ;
            }
            else if( countless < k && countless + countequal < k){
                start = mid + 1 ;
            }
        }
        return 0;
    }
};