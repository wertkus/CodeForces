#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    string x; cin>>x;
    int len=x.length();
    for (int i=0;i<len/2; i++)
    {
    swap(x[i],x[len-i-1]);
    }
    string y; cin>>y;
    if(x==y){cout<<"YES";}
    else {cout<<"NO";}
    
    return 0;
}