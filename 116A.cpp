#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    int in,out,count=0,dummy=0;
    for(int i=0;i<n;i++){
        cin>>out>>in;
        count+=in-out;
        if(count>dummy){dummy=count;}
    } 
    std::cout<<dummy<<endl;
    return 0;
}