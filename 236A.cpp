#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    string x; cin>>x;
    int y=0;  int len = x.length();
    sort(x.begin(),x.end());
    for (int i=0;i<len;i++)
    {
        if(x[i]!=x[i+1]){y++;}
    }
    if(y%2==0){ cout<<"CHAT WITH HER!"<<endl;}
    else{cout<<"IGNORE HIM!"<<endl;}
    return 0;
}