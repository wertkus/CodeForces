#include <bits/stdc++.h>

using namespace std;

int main(){
    string x;
    cin>>x;
    int len = x.length();
    int t=0;
    for(int i=1;x[i]!='\0';i++){
        if(x[i] >= 65 && x[i] <= 90){
            t++;
        }
    }
    if (t==len-1)
    {
        for (int i=1;x[i]!='\0'; i++)
        {
            x[i]+=32;
        }
        if(x[0]>=97 && x[0]<=122){
            x[0]-=32;
        }
        else{
            x[0]+=32;
        }
        
    }
    cout<<x;
    
    return 0;
}
