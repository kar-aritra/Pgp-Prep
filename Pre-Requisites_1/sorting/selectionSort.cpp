// // selection sort 

#include<bits/stdc++.h>

using namespace std ;

vector<int> selectionSort(vector<int> ans ){
    int i=0;
    while(i<ans.size()){
        int minIndex=i;
        for(int j=i+1; j<ans.size();j++){
            if(ans[j]<ans[minIndex]){
                minIndex=j;
            }
        }
        swap(ans[i],ans[minIndex]);
        i++;
    }
    return ans ;
}


int main(){
    vector<int> ans ={64,25,12,22,11};

    vector<int> arr = selectionSort(ans);

    for(auto x: arr ){
        cout<<x<<" ";
    }

    return 0;
}

// sc = O(1)
// tc = best and worst case same = O(n2)

// best use = works good on smaller size array

// find out if it is a stable or unstable algorithm 