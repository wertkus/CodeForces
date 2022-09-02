#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int x,n; cin>>x>>n;
    while(n--){
        if(x%10==0){x/=10;}
        else{x-=1;}
        if(n==0){break;}
    }
     cout<<x;
    return 0;
}