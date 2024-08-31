#include <iostream>
#include <string>
#include <cmath>

using namespace std;

string maiorfinal = "";
string menorfinal = "";
int valorfinala,valorfinalb;

void compara(string ma, string me){

    for (int i=0; i<ma.size(); i++){

        if (ma.at(i) > me.at(i)){
            maiorfinal = maiorfinal + ma.at(i);
        }
        else if (ma.at(i)==me.at(i)){
            maiorfinal = maiorfinal + ma.at(i);
            menorfinal = menorfinal + me.at(i);
        }
        else if (me.at(i) > ma.at(i)){
            menorfinal = menorfinal + me.at(i);
        }
        
    }

    if (menorfinal == ""){
        valorfinalb = -1;
    }else{
        valorfinalb = stoi(menorfinal);
    }
    
    if(maiorfinal == ""){
        valorfinala = -1;
    }else{
        valorfinala = stoi(maiorfinal);
    }

    
    /*convertendo string pra int
    valorfinala = stoi(maiorfinal);
    valorfinalb = stoi(menorfinal);*/
    
    cout<<min(valorfinala,valorfinalb)<<" "<<max(valorfinala,valorfinalb);

}

int main(){

    int A,B;

    cin>>A>>B;
    //comparando
    int maior = max(A,B);
    int menor = min(A,B);

    string maiord = to_string(maior);
    string menord = to_string(menor);
    string zeros = "";

    //quantidade de dígitos do maior

    //adicionando zeros a esquerda do menor
    int oqfalta = (maiord.size() - menord.size());

    while (oqfalta>0){
        zeros += '0';
        oqfalta--;
    }

    string newmenor = zeros + menord;

    compara(maiord,newmenor);


    return 0; 
}