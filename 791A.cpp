#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b; cin>>a>>b;
    int t=0;
    while(true){
        t++;
        a=a*3;
        b=b*2;
        if(a>b){break;}
    }
    cout<<t;
    return 0;
}