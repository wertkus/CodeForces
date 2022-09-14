#include <bits/stdc++.h>
using namespace std;
int main(){
	string x,y; cin>>x>>y;
	int t=0;
	for(int i=0;i<x.size();i++){
		if(tolower(x[i]) < tolower(y[i])){
			t = -1;
			break;
		} 
		if(tolower(x[i]) > tolower(y[i])){
			t = 1;
			break;
		} 
	}
	cout<<t;
	return 0;
}