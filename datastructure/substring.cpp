#include <bits/stdc++.h>


using namespace std;
int main(){
    string string1,string2;

    getline(cin,string1);
    
    while(getline(cin,string2)){
        int len_atual,lenmax=0;

        for(int i=0;i<string1.size();i++){

            for(int j=0;j<string2.size();j++){

                if(string1[i]==string2[j]){
                    len_atual=0;
                    /*verificar o tamanho da maior substring*/
                    for(int k = i, l = j; k<string1.size() && l<string2.size(); k++,l++){

                        if(string1[k]!=string2[l]) break;
                        len_atual++;
                    }
                    if(len_atual>lenmax) lenmax=len_atual;
                }
            }
        }
        cout<<lenmax<<endl;
        getline(cin,string1);
    }
}