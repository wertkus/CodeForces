#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int m,n; cin>>m>>n;
    int area=0; int dom=0;
    if (1<=m<=n<=16)
    {
        area=m*n;
        dom=area/2;
        cout<<dom;
    }
    return 0;
}