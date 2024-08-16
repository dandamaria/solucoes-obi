#include <iostream>

using namespace std;

int contad(int n,int s) {
    int soma = 0; // Inicializa a soma como 0
    while (n > 0) { // Enquanto n for maior que 0
        soma += n%10; // Adiciona o último dígito à soma.
        n /= 10; // Remove o último dígito e autaliza n, fazendo o loop continuar
    }
    return soma; // Retorna a soma total
}

int main(){

    int s,a,b,i=0;
    cin>>s>>a>>b;

    for(a;a<=b;a++){
        if(contad(a,b)==s){
            i++;
        }
    }

    cout<<i;

    return 0;
}