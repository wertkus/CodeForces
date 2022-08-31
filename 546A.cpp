#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int k,n,w;//first banana k, piece w,n dollar
    cin>>k>>n>>w;
    int t=(w*(w+1))/2;
    int total=t*k;
    if(n>=total){cout<<"0";}
    else if(n<total){cout<<abs(total-n);}
    return 0;
}