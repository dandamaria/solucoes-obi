#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e5 + 10; //max de mec e max de carros

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);


    int n,m;
    vector<int> t(MAXN);
    vector<int> f(MAXN);
    priority_queue<pair<long long,int>> q;

    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>t[i];
        q.push(make_pair(0,i));
    }
    for(int i=0;i<m;i++){
        cin>>f[i];
    }

    //processamento

    sort(f.begin()+1,f.begin()+1+m);
    long long espera = 0;

    for(int i = m; i > 0; i--){
        pair<long long, int> p = q.top();
        q.pop();
        
        long long small = p.first;
        int ix = p.second;
        long long qtt = small/t[ix];

        espera -= small * f[i];

        q.push(make_pair((qtt-1)*t[ix], ix));
    }

    cout << espera << '\n';

    return 0;
}
    /* distribuir os carros a serem consertados entre os mecânicos de modo a garantir alta satisfação dos clientes.
    
    tempo de espera 
    tempo de conserto = tempo base para cada carro = T
    fator trabalho  = quanto tempo o mec demora para concertar UMA unidade de trabalho = F

    mec j consertar i = T.F
    exemplo:
    carros = 4
    t[4] = [5,10,15,20]
    mapa <string, int> mecf = {{"m1",1},{"m2",2}};

    */