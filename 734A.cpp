#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,a=0,d=0; string x;
    cin>>n>>x;
    for (int i=0;i<n;i++)
    {
        if(x[i]=='A'){a++;}
        if(x[i]=='D'){d++;}
    }
    if(a>d){cout<<"Anton";}
    else if(d>a){cout<<"Danik";}
    else if(a==d){cout<<"Friendship";}
    
    return 0;
}