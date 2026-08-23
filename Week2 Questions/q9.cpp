// Kth smallest element in the array using constant space when array can't be modified


// nahi hua 

#include<bits/stdc++.h>

using namespace std ;

int kthSmallest( int* arr, int k , int n ){
    int start = *min_element ( arr, arr+n);
    int end = *max_element(arr,arr+n);
    while(start <= end ){
        int mid = start +(end-start)/2;

        int countless=0;
        int countequal =0;
        for(int i=0; i<n; i++){
            if(arr[i]<mid){
                ++countless;
            }
            else if(arr[i]==mid){
                ++countequal;
            }
        }

        if(countless>= k){
            end=mid-1;
        }
        else if(countless<k && (countless+countequal)>=k){
            return mid ;
        }
        else if(countless < k && (countless+countequal)<k){
            start = mid + 1 ;
        }
    }
}

int main(){
    int arr[]={10,4,3,20,14,11,15};
    int n = sizeof(arr)/sizeof(int);

    int k=5 ;

    cout<<"answer is = ";
    cout<<kthSmallest(arr,k,n);
    // for kthLargest(arr,n-k+1,n);
    return 0;
}