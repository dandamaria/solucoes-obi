#include <bits/stdc++.h>

using namespace std;

#define MAXN 101

bool curvas[MAXN][MAXN];
vector<int> grafo[MAXN];

bool busca(int i, int j){
    return grafo[i][j];
}

int main(){

    int n;
    cin>>n;

    /*
    for(int k=0;k<n;k++){
        int i,j;
        cin>>i>>j;
        grafo[i].push_back(j);
        grafo[j].push_back(i);  

    }*/

   for(int k=0;k<n;k++){
    int x, y;
    cin>>x>>y;
    grafo[k].push_back(x);
    grafo[k].push_back(y);
   }


    return 0;
}