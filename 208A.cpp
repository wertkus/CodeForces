#include <bits/stdc++.h>

using namespace std;

int main(){
    string x;
    cin>>x;
    for(int i=0;i<x.length();i++)
    {
        if (x[i]=='W' && x[i+1]=='U' && x[i+2]=='B' )
        {
            i+=2;
            cout<<" ";
        }
        else{
            cout<<x[i];
        }
        
    }
    cout<<endl;

    return 0;
}
