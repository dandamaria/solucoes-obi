#include <bits/stdc++.h>

using namespace std;

int main(){

    int n,m;
    cin>>n;
    string rua;
    map<string,int,greater<string>> ruas;

    for(int i=0;i<n;i++){
        cin>>rua>>m;
        ruas[rua] = m;
    }

    for(auto rua : ruas){
        cout<<rua.first<<" "<<rua.second<<endl;
    }

    return 0;
}