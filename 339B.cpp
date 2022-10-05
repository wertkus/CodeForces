#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int x[m];
    for (int i=0;i<m;i++)
    {
        cin>>x[i];
    }
  // long long t is important, i've taken wrong answer in 7th
    long long t=x[0]-1; // -1 for first step calculate
    for(int i=0;i<m-1;i++){// we've already made first step, cause of (m-1)
        if(x[i]>x[i+1]){
            t+=n-x[i]+x[i+1];
        }
        else{
            t+=x[i+1]-x[i];
        }
    }
    cout<<t;
    
    return 0;
}
