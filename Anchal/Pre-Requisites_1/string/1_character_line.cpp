#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	string str ;
    cout<<"enter the string ";
	cin>> str ;
	vector<char> arr(str.begin(),str.end());
	for(int i=0; i<str.size();i++){
		cout<< arr [i]<<endl;
	}

	return 0;
}