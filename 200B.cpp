#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    double t,sum=0.0,res;
    for(int i=0;i<n;i++)
    {
        cin>>t;
        sum=sum+(t/100);
    }
    res=(sum/n)*100;
    cout<<setprecision(14)<<res<<endl;
    return 0;
}