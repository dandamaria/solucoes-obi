#include <bits/stdc++.h>

using namespace std;
int main(){

    /*PILHA*/

    /*stack<int> pilha;
    pilha.pop();
    pilha.empty();
    pilha.push(2);
    pilha.top();*/

    /*FILA*/
    /*queue<string> fila_queue;

    fila_queue.front(); //consulta
    fila_queue.back(); //consulta
    fila_queue.empty(); //consulta

    fila_queue.pop(); //edita
    fila_queue.push("teste"); //edita
    fila_queue.size() //consulta
    */

    /*LSTA

    list<int> list;
    list.begin(); //retorna endereço
    list.end(); //retorna endereço

    list.front(); //retorna conteúdo
    list.back(); //retorna conteúdo

    list.push_back(1);
    list.push_front(2);

    list.pop_back();
    list.pop_front();

    list.reverse();
    list.size();*/

    /*MAP*/
    string gnome;

    map <string,int> mapa;
    for(int n=0;n<4;n++){
        cin>>gnome;
        mapa[gnome] = n;
        mapa[gnome+to_string(n)];
    }

    for (auto i=mapa.begin(); i != mapa.end(); i++){
        cout<<i->first<<i->second<<"\n"<<endl;
    }

    return 0;
}