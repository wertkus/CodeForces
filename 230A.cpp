#include <bits/stdc++.h>

using namespace std;

int main(){
    int s,n;
    cin>>s>>n;
    vector<pair<int,int>> v;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        v.push_back(make_pair(x,y));
    }
    sort(v.begin(),v.end());
    int t=0;
    for(int i=0;i<n;i++){
        if(v[i].first<s){
            s+=v[i].second;
            t++;
        }
    }
    cout<< (t==n ? "YES":"NO");

    return 0;
}
