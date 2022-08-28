#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main(){
    int x,y,z,r;
    for(int j=1;j<=5;j++){
        for (int k=1;k<=5;k++)
        { 
            cin>>x;
            if(x==1){
                y=j;
                z=k;
            }
        }
    } r=abs(y-3)+abs(z-3);
    cout<<r;
    return 0;
}