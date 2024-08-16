#include <iostream>

using namespace std;

const int MAX = 1000010;
int juntos[MAX][2], separados[MAX][2], grupos[MAX];

int main(){

    int e,m,d;
    int v = 0; //violação
    std::cin>>e>>m>>d;

    for (int i = 0; i<m; i++)
        cin>>juntos[i][0]>>juntos[i][1]; //lendo o par de juntos
    for (int i = 0; i < d; i++)
        cin>>separados[i][0]>>separados[i][1]; //lendo o par de separados
    for (int i = 0; i< e/3; i++){ // exemplo: (e=9) 9/3 = 3, então três vezes ele vai ler o grupo dos alunos
        int a,b,c;
        cin>>a>>b>>c; //1°,2°,3°...4°,5°,6°...7°,8°,9°
        grupos[a]=grupos[b]=grupos[c]=i; // o 1°,2° e 3° são do mesmo grupo (valem i).
        // 1,2,3 -> 1
        // 4,5,6 -> 2
        // 7,8,9 -> 3
    }


    for(int i=0;i<=m;i++){
        if(grupos[juntos[i][0]] != grupos[juntos[i][1]]) // se o grupo que contêm o valor a for diferente do grupo que conter o valor b, então adiciona +1 ao número de violações, sendo que A e B são valor imaginários que querem ficar juntos, a mesma lógica será usada para os alunos que querem está separados.
        v++;
    }

    for(int i =0;i<=d;i++){
        if(grupos[separados[1][0]] == grupos[separados[i][1]])
        v++;
    }


    cout<<v;

    return 0;
}