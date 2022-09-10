#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c; cin>>a>>b>>c;
    int dummy=0;
    int x=a+b*c; if(x>dummy){dummy=x;}
    int y=a*(b+c); if(y>dummy){dummy=y;}
    int z=a*b*c; if(z>dummy){dummy=z;}
    int v=(a+b)*c; if(v>dummy){dummy=v;}
    int f=a+b+c; if(f>dummy){dummy=f;}
    cout<<dummy;

    return 0;
}