#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n;
    string x;
    cin>>n;
    map<string,int>liste;
    while(n--){
        cin>>x;
        if(liste.count(x)==0){
            cout<<"OK"<<endl;
            liste[x]=1;
        }
        else{
            cout<<x<<liste[x]<<endl;
            liste[x]++;
        }
    }

    return 0;
}
