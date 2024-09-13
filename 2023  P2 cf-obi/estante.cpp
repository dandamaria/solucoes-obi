#include <iostream>

using namespace std;

int main(){

    int x,y,z,n,l;
    cin>>x>>y>>z>>n;
    l = (x+y+z)%n;
    cout<<l;

    return 0;
}