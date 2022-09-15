#include <bits/stdc++.h>
using namespace std;
int main(){
	int n; cin>>n;
	int t=0; string x[n];
	for(int i=0;i<n;i++){
		cin>>x[i];
	}
	for(int i=0;i<n;i++){
		if(x[i]!=x[i+1]){t++;}
	}
	cout<<t;
	return 0;
}