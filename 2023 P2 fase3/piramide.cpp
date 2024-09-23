#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int s;

    vector<int> pesos;
    for(int i=0;i<6;i++){
        int valor;
        cin>>valor;
        s += valor;
        pesos.push_back(valor);
    }

    sort(pesos.begin(),pesos.end());

    bool cond1 = (s%3 == 0);
    bool cond2 = (pesos[5] == s/3);
    bool cond3 = false;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(pesos[i]+pesos[j]==pesos[5])cond3 = true;
        }
    }
    if(cond1 && cond2 && cond3) cout<<"S";
    else{cout<<"N";}

    return 0;
}