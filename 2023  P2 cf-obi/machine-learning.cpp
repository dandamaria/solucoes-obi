#include <bits/stdc++.h>
/*
#include <ios>
#include <vector>
#include <map>
*/


using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    vector<string> s;

    cin>>N;

    map<string, vector<string> > topicos;
    string topico,palavra;
    int K;

    for(int i=0;i<N;i++){
        cin>>topico;
        cin>>K;
        while(K--){
            cin>>palavra;
            topicos[topico].push_back(palavra);
        }
    }

    /*artigo*/
    int X;
    cin>>X;
    vector<string> artigo;
   for(int i=0;i<X;i++){
        cin>>artigo[X];
    }

    map<string, int> contagem;

    for (const auto &topico : topicos) {
        const string &nome_topico = topico.first;
        const vector<string> &palavras_relacionadas = topico.second;
        

    
    return 0;
}