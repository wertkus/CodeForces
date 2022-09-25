#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    int x[n]; int sum=0;
    for(int i=0; i<n;i++){
        cin>>x[i];
        sum+=x[i];
    }
    sort(x,x+n);
    sum=sum/2;
    int sum2=0; int t=0;
    for(int i=n-1; i>=0; i--){
        sum-=x[i];
        t++;
        if(sum2>sum){
            break;
        }
    }
    cout<<t;

return 0;
}
