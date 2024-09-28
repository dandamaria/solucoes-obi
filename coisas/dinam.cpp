#include <bits/stdc++.h>

using namespace std;

int main(){

    /*          EXEMPLO DE PROBLEMA: MENOR CAMINHO (ALGORITMO)
            estágio 1
    path(T){
    path(7) = min(path(T)+dt7);
    path(8) = min(path(T)+dt8);
    }
            estágio 2
    path(T){
    path(5) = min(path(7)+d57);
    path(6) = min(path(8)+d68,path(T)+d6t);
    }
            estágio 3
    path(T){
    path(4) = min(path(5)+d45,path(6)+d46,path(7)+d47);
    } 
            estágio 4
    path(2) = min(path(5)+d25,path(4)+d24);
    path(3) = min(path(4)+d34,path(6)+d36);
            estágio 5 **útimo**
    path(1) = min(path(2)+d12,path(3)+d13);
    */
   


    return 0;
}