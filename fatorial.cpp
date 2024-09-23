#include <iostream>

using namespace std;

int fat(int n){

    if(n==0) return 1;
    else{
        return n*fat(n-1);
    }

}

/*Escrever a função recursiva int soma(int n), que
retorna a soma dos n primeiros inteiros ímpares.*/

int som(int n){
    if(n==1)return 1;
    else if(n>1){
    return  2*n-1+som(n-1);
    }
}

int main(){

    int num;
    cin>>num;
    cout<<som(num);

    return 0;
}