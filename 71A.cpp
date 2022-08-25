#include <iostream>
using namespace std;
int main(){
    int x; cin>>x;
    while(x--){string y;
    cin>>y; int n=y.length();
    if(n>10) cout<<y[0]<<n-2<<y[n-1]<<endl;
    else cout<<y<<endl;}
    return 0;
}
