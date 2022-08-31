#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    cin.tie();
    int t=0;
    int n; cin>>n;
    string x; cin>>x;
    for(int i=0;i<n;i++){
        if(x[i]==x[i+1])
        {t++;}
    }
    cout<<t;
    return 0;
}