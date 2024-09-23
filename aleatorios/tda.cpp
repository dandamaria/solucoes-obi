#include <bits/stdc++.h>


using namespace std;
int main(){
    int n;
    cin>>n;

    list<int> pares;
    list<int> impares;

    for(int i=0;i<n;i++){
        int valor;
        cin>>valor;
        if(valor%2==0){ pares.push_back(valor);}
        else {impares.push_back(valor);}
    }

    pares.sort();
    impares.sort(greater<int>());

    cout<<"\n";

    for(int num : pares){
        cout<<num<<"\n";
    }
    for(int n : impares){
        cout<<n<<"\n";
    }

    return 0;
}