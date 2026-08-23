// reverse  a string

#include <bits/stdc++.h>

using namespace std ;

int main(){
    string str ;
    cout<<"Enter a string ";
    cin>>str ;

    int first =0;
    int last = str.length()-1;
    while(first<last){
        swap(str[first],str[last]);
        first ++; last --;
    }

    cout<<str ;
}
