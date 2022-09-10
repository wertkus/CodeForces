#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    string x[100000]; int count=0;
    for (int i=0;i<4; i++)
    {
        cin>>x[i];
    }
    for (int i = 0; i < 4; i++)
    {
        if(x[i]==x[i+1] || x[i]==x[i+2] || x[i]==x[i+3]){
            count++;
        } 

    }
    cout<<count;
    

    return 0;
}