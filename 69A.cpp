#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    int x,y,z;
    int d1,d2,d3; //our dummies;
    while(n--){
        cin>>x>>y>>z;
        d1=d1+x;
        d2=d2+y;
        d3=d3+z;
        x=0;y=0;z=0;
    } if(d1==0 && d2==0 && d3==0){cout<<"YES";}
    else{cout<<"NO";}
    return 0;
}