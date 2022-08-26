#include <iostream>
using namespace std;
int main(){
    int n; cin>>n;
    int sum=0;
    while(n--){
        int x,y,z; //petra vesya tonya
        cin>>x>>y>>z; int dum=x+y+z;
        if (dum >=2){sum++;}    
    }   cout<<sum;
    return 0;
}