#include <bits/stdc++.h>

using namespace std;

// int fib(int a){
//     if(a<=1) return a; 
//     return fib(a-1)+fib(a-2);
// }

long long int fiboseq[101];

int fibo(int a){
    fiboseq[0]=0;
    fiboseq[1]=1;
    for(int i=2;i<=a;i++){
        fiboseq[i] = fiboseq[i-1] + fiboseq[i-2];
    }

    return fiboseq[a];

}

int main(){
    int n;
    cin>>n;
    
    //int fibonacci = fib(n);
    int fibonacci = fibo(n);
    
    cout<<fibonacci<<" de \n"<<n;
    return 0;
}