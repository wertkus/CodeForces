#include <bits/stdc++.h>

using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    int t=0;
    while(a>=b){
        int d=a%b;
        a-=d;
        t+=a;
        a/=b;
        a+=d;
    }
    t+=a;
    cout<<t;
    return 0;
}
