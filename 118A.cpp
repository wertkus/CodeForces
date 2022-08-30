#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;
int main(){
    string x; cin>>x;
    int len = x.length();
    for(int i=0;i<len;i++)
    {
        if(x[i]>=65 && x[i] <=90) x[i]=x[i]+32;
        if(x[i]!='a' && x[i]!='e' && x[i]!='i' && x[i]!='o' && x[i]!='u' && x[i]!='y')
        {cout<<"."<<x[i];}   
    }
}