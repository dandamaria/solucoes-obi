#include <bits/stdc++.h>

using namespace std;

/*
N = estações
K = sistemas de transporte
M = quant de arestas(ligações)
obs: cada M pertence a um único K
são arestas sem direcionamento
cada par N tem no máximo 1M entre si

Pi = preço da passagem para cada Ki
passagem só conta quando a aresta for percorrida

após pago pi para entrar em um sistema ki, todas as arestas de valor pi podem ser percorridas sem pagar, a partir do momento que percorrido um sist kj, é preciso pagar o preço pj, caso retorne a ki é preciso pagar novamente pi, e assim por diante.

EXEMPLO
arestas preco valor
(1,5)     1     5
(5,6)     3     7
(5,4)     3     7
(5,2)     1     5
(6,3)     2     1
(2,3)     2     1
(2,4)     3     7
(4,7)     2     1
(7,3)     1     5

PROBELMA: QUAL O MENOR CUSTO PARA IR DA ESTAÇÃO A PARA A ESTAÇÃO B 

*/

const int MAXN = 1e5+10;
const int INF = 1e9+10;

int n, m, k, v[],u[],t[],a,b,d[];
int p[MAXN],chefe[MAXN];

vector<pair<int, int>> adj[MAXN*5];
map<pair<int,int>,int> mapa;
    
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin>>n>>m>>k;

    for(int i=0;i<k;i++){
        cin>>p[i];
    }

    for(int k=0; k<=m;k++){
        // int i,j;
        // cin>>i>>j;

        // caminho.push_back(make_pair(i,j));
        // caminho.push_back(make_pair(j,i));

        cin>>v[k]>>u[k]>>t[k];
    }

    cin>>a>>b;

    /*compressão de cordenadas EXPLICADA*/

    int indice=0; //novo índice que será atribuído a cada par de coordenadas

    //percorrendo todas as arestas (estações)
    for(int i = 1; i <= m; i++){
        mapa[make_pair(v[i],t[i])] = 0;
        mapa[make_pair(u[i], t[i])] = 0;
    }

    //para cada elemento do mapa eu vou atribuir ao segundo elemento do par o valor de um índice, assim todos os pares viram um índice.
    for(auto &e :mapa){
        e.second = ++indice;
    }

    //Registra as estações, atribuindo também índices únicos a elas, garantindo que todas as estações estejam no mapa com um identificador apropriado.
    for(int i=1;i<=n;i++){
        mapa[make_pair(i, i+k)] = chefe[i] = ++indice;
    }

    /*Novo grafo, PORQUE? O grafo original é representado pelas arestas entre os vértices (estações). No entanto, a lógica de custo e a forma como as arestas se comportam em relação aos sistemas de transporte precisam ser representadas de maneira que o algoritmo de Dijkstra funcione corretamente.
    Cada aresta não tem apenas um custo fixo; o custo depende do sistema de transporte que você está usando. Portanto, precisamos de uma representação que considere isso.
    */

    for(int i=0;i<=m;i++){
        int v1 = mapa[make_pair(v[i], t[i])];
        int v2 = mapa[make_pair(u[i], t[i])];

        for(int j=0;j<2;j++){
            int chefao = chefe[v[i]];

            adj[v1].push_back(make_pair(v2,0));
            adj[v1].push_back(make_pair(chefao,0));
            adj[v1].push_back(make_pair(v1,p[t[i]]));

            swap(v1, v2);
            swap(v[i], u[i]);
        }
    }

    for(int i=0; i<= indice; i++){
        d[i] = INF;
    }
    int sa = chefe[a];
    d[sa] = 0;
    
    priority_queue<pair<int,int>> q;
    q.push(make_pair(0,sa));

    while(!q.empty()){
        int dist = -q.top().first;
        int v = q.top().second;

        q.pop();

        if(d[v] != dist){
            continue;
        }

        for(auto e: adj[v]){
            int price = e.second;
            int viz = e.first;

            int dd = dist+price;

            if(dd < d[viz]){
                q.push(make_pair(-dd, viz));
                d[viz] = dd;
            }

        }

    }

    int sb = chefe[b];

    if(d[sb] == INF){
        d[sb] = -1;
    }

    cout << d[sb] << "\n";
    
    return 0;
}