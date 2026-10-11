// bubble sort

// #include<bits/stdc++.h>

// using namespace std ;

// vector<int> bubbleSort(vector<int> arr ){
//     int i=0;int j= i+1;
//     int p= arr.size();
//     while(i<j && j<p){
//         if(arr[i]>arr[j]){
//             swap(arr[i],arr[j]);
//         }
//         i++;j++;
//         if(j==p){
//             i=0;
//             j=i+1;
//             p=p-1;
//         }
//     }
//     return arr ; 
// }

// int main(){
//     vector<int> arr={10,1,7,6,14,9};

//     vector<int> ans = bubbleSort(arr);

//     for(auto x:ans){
//         cout<<x<<" ";
//     }

//     return 0;
// }

// better way of writing it 

#include<bits/stdc++.h>

using namespace std ;

vector<int> bubbleSort(vector<int> arr ){
    for(int i=1; i<arr.size();i++){
        bool swapped = false;
        for(int j=0;j<arr.size()-i;j++){
            if(arr[j]>arr[j+1]){
                swapped = true;
                swap(arr[j],arr[j+1]);
            }
        }
        if(swapped == false ){
            break;
        }
    }
    return arr;
}

int main(){
    vector<int> arr = {10,1,7,6,14,9};
    vector<int> ans = bubbleSort(arr);

    for(auto x : ans ){
        cout<<x <<" ";
    }

    return 0;
}

// worst case  tc - O(n2)
// best case tc - O(n)

// is it stable or unstable and is it in-place sorting 