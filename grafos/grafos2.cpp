#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1010;

vector < pair<int,int> > arestas;
int curva[MAXN][MAXN];

bool busca(int i,int j){
    /*for(int k=0;k<(int)arestas.size();k++){
        if((arestas[k].first == i && arestas[k].second == j)||(arestas[k].first == j && arestas[k].second == i)) return true;
    } 
    return false;*/

    return curva[i][j];
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    arestas.push_back(make_pair(1,2));
    arestas.push_back(make_pair(1,4));
    arestas.push_back(make_pair(2,3));
    arestas.push_back(make_pair(3,4));
    arestas.push_back(make_pair(4,5));

    curva[1][2] = curva [2][1] = true;
    curva[1][6] = curva [6][1] = true;
    curva[2][6] = curva [6][2] = true;
    curva[2][5] = curva [5][2] = true;
    curva[3][4] = curva [4][3] = true;

    int x,y;
    cin>>x>>y;

    if(busca(x,y)==true)cout<<"existe";
    else(cout<<"nao");
    
    return 0;
    }