#include <bits/stdc++.h>

using namespace std;
int main(){

    string fita;
    int cont=0;

    cin>>fita;

    stack<int> pilha;

    for(int i=0;i<fita.length();i++){
        char base = fita[i];
        if(base=='B' || base=='C') pilha.push(i);
        else if(base =='S' || base=='F'){
            if(!pilha.empty()){
                int indice = pilha.top();
                char baseemparelhada = fita[indice];
            }
        }

    }
    return 0;
}