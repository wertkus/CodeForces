#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    string x; cin>>x;
    int j=0,c=0; string test="hello";
    int len=x.length();
    for (int i=0;i<len;i++)
    {   
        if(x[i]==test[j]){
            c++;
            j++;
        }
    }
    if(c==5){cout<<"YES";}
    else{cout<<"NO";}
    
    return 0;
}