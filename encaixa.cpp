#include <bits/stdc++.h>

using namespace std;
int main(){
    int N;
    cin>>N;

    for(int i=0;i<N;i++){
        string A,B;
        cin>>A>>B;
        if(B.size()>A.size()){cout<<"nao encaixa"<<"\n";}
        else{
            int encaixa=0;
            for(int j=B.size(),k=A.size(); j>0 && k>0; j--,k--){
                if(A[k-1] != B[j-1])break;
                encaixa++;
            } 
            if(encaixa!=B.size()){cout<<"nao encaixa"<<"\n";}
            else{cout<<"encaixa"<<"\n";}   
        }

    }
    return 0;
}