#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    long long int n; cin>>n;
    int i,total=0;
    while(n)
    {
        if(n%10==4 || n%10==7){total++;}
        n=n/10;
    }
    if(total==4||total==7){cout<<"YES"<<endl;}
    else {cout<<"NO"<<endl;}
    return 0;
}