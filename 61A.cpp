#include <bits/stdc++.h>
using namespace std;
int main(){
    string x,y;
    cin>>x>>y;
    int len=x.length();
    string z;
    for (int i=0;i<len;i++)
    {
        if(x[i]=='0' && y[i]=='0'){cout<<"0";}
        else if(x[i]=='1' && y[i]=='1'){cout<<"0";}
        else if(x[i]=='0' && y[i]=='1'){cout<<"1";}
        else if(x[i]=='1' && y[i]=='0'){cout<<"1";}
    } 
    
    
    return 0;
}