// 240. Search a 2D Matrix II

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) 
    {
        int m=matrix.size();
        for(int i=0; i<m; i++)
        {
            int s=0;
            int e = matrix[0].size()-1;
            while(s<=e)
            {
                int mid = s +(e-s)/2;
                if(matrix[i][mid]==target)
                {
                    return true;
                }
                else if(matrix[i][mid]>target)
                {
                    e=mid-1;
                }
                else
                {
                    s=mid+1;
                }
            }
        }
        return false;
    }
};