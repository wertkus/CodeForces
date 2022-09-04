#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,h; cin>>n>>h;
    int t=0;
    while(n--){
        int x; cin>>x;
        if(x<=h){t++;}
        else if(x>h){t+=2;}
    }
    cout<<t;
    return 0;
}