#include <bits/stdc++.h>
using namespace std;
int main(){
	int n; cin>>n;
	int x[100],t;
	for(int i=1;i<=n;i++){
		cin>>t;
		x[t]=i;
	}
	for(int i=1;i<=n;i++){
		cout<<x[i]<<" ";
	}
	return 0;
}