#include <iostream>
#include <bits/stdc++.h>
 
using namespace std;
int main(){
    string x; cin>>x;
    int len = x.length();
    for (int i=0;i<len;i+=2)
    {
        for(int j=0;j<len-2;j+=2)
        {
            if(x[i]<x[j])
            {
                swap(x[i],x[j]);
            }
        }
    }
    cout<<x;
    return 0;
}