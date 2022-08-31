#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    int t=n/5;
    if(n%5<5&&n%5>0){t++;}
    cout<<t;
    return 0;
}