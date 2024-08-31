#include <iostream>

using namespace std;

int contad(int n){
    int soma = 0; // Inicializa a soma como 0
    while (n > 0) { // Enquanto n for maior que 0
        soma += n % 10; // Adiciona o último dígito à soma
        n = n / 10; // Remove o último dígito
    }
    return soma; // Retorna a soma total
}

int main(){

    int s,a,b,i=0;
    cin>>s>>a>>b;

    while(a<=b){
        if(contad(a)==s){
            i++;
        }
        a++;
    }

    cout<<i;

    return 0;
}