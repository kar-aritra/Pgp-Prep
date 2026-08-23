// Maximum subarray size having all subarrays sums less than k

// brute force bhi nahi hua

// Method 1

#include <bits/stdc++.h>

using namespace std;

int maxSubArray(vector<int> arr, int k, int n)
{
    int ans = -1;
    for (int i = 1; i <= n; i++)
    {
        int maxSum = INT_MIN;
        for (int j = 0; j < n - i+1; j++)
        {
            int sum = 0;
            for (int l = j; l < j + i; l++)
            {
                sum = sum + arr[l];
            }
            maxSum = max(maxSum, sum);
        }
        if (maxSum <= k)
        {
            ans = max(ans, i);
        }
    }
    return ans ;
}

int main()
{
    vector<int> ans = {1,2,3,4};
    int k =8;
    cout<< maxSubArray(ans,k,ans.size());

    return 0;
}

// mthod 2 bs have to see it again

// method 3 have to see it again
