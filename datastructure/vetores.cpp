#include <iostream>
#include <vector>

using namespace std;

int main(){

   vector<string> mamamia = {"donna", "sam", "sky", "sophie", "tanya"};
   for(string personagens : mamamia){
    cout<<personagens<<"\n";
   }

   cout<<mamamia.front()<<"\n";
   cout<<mamamia.back()<<"\n";

   mamamia.push_back("rosie");
   mamamia.pop_back(); /*retira rosie*/

   mamamia.at(0) = "Nova Donna" ; /*altera "donna" pra "Nova Donna"*/

   for(string ind : mamamia){
    cout<<"\n"<<ind<<"\n";
   }

   (mamamia.empty())? cout<<"o vetor não possui elementos" : cout<<"o vetor possui elementos"; /*verificando se há elementos no vetor*/


    return 0;
}