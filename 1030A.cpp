#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    int t=0;
    while(n--){
        int x; cin>>x;
        if(x==1){t++;}
    } if(t>0){cout<<"HARD";}
    else {cout<<"EASY";}

    return 0;
}