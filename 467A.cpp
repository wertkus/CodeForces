#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    int t=0;
    while(n--){
        int p,q; cin>>p>>q;
        if(q-p>=2){t++;}
    } cout<<t;
    return 0;
}