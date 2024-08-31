#include <iostream>
#include <cmath>

using namespace std;


int main(){

    int a,b,cont=0,i=0;
    cin>>a>>b;

    while (i<=b){
        long num = pow(i,6);
        if(num>=a && num <=b){
            cont++;
            i++;
        }else{
            i++;
        }
    }
    cout<<cont;
    return 0;
}