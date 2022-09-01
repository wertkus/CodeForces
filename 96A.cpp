#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    string x; cin>>x;
    int t=1,i;
    for(i=0;x[i]!='\0';i++){
        if(x[i]==x[i+1]){
            t++;
            if(t>=7){cout<<"YES"<<endl; break;}
            
        }
        else{t=1;}
    }
    if(t<7){cout<<"NO"<<endl;}
    return 0;
}