#include <bits/stdc++.h>

using namespace std;

vector<pair<int,int>> grafo;
vector<pair<int,int>> confirmadas;

void adj(int x, int y){
    confirmadas.clear();

    for(const auto& par : grafo){
        if(par.first == x){
            confirmadas.push_back(make_pair(x,par.second));
        }    
    }

    cout<<"os vertices adjacentes ao seu numero "<<x<<" sao:"<<"\n";

    if(!confirmadas.empty()){
        for(const auto& aresta : confirmadas){
        cout<<aresta.second<<"\n";
        }
    }else{
        cout<<"nao existem vertices adjacentes a "<<x;
    }
    

}

int main(){

    int k;
    cin>>k;
    for(int x=0;x<k;x++){
        int i, j;
        cin>>i>>j;
        grafo.push_back(make_pair(i,j));
        grafo.push_back(make_pair(j,i));
    }

    // int tam = accumulate(grafo, grafo + k, 0, [](int sum, const vector<int>& v){
    //     return sum + v.size();
    // });

    int numero;
    cin>>numero;

    adj(numero, k);

    return 0;
}