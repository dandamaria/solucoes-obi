#include <bits/stdc++.h>

using namespace std;

int main(){

    int m,n,num;
    cin>>m>>n;
    string palavra,texto,word;

    map<string,int> heypoint;

    for(int i=0;i<m;i++){
        cin>>palavra>>num;
        heypoint[palavra] = num;
    }
    cin.ignore();
    
    for(int i=0;i<n;i++){

        int cont = 0;


        while(true){
            getline(cin,texto);
            if(texto==".")break;

            stringstream ss(texto);
            while(ss>>word){
                if(heypoint.count(word)){
                    cont+=heypoint[word];
                }
                // if(heypoint.find(word) != heypoint.end()){
                //     cont+=heypoint[word];
                // }
            }
        }
        
        cout<<cont<<endl;

    }

    return 0;
}