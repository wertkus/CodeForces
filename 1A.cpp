#include <iostream>
#include <math.h>
using namespace std;
int main(){ // need ceil!
    double n,m,a; cin>>n>>m>>a;
    long long x_line=ceil(n/a);
    long long y_line=ceil(m/a);
    long long r= x_line*y_line;
    cout<<r;
    return 0;
}