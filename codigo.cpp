#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    char c[1010];
    cin>>n>>c;
    int i = 0;
    while(i<n){
        int rep =1;
        while(c[i+1]==c[i]){
            rep++;
            i++;
        }
        cout<<rep<<" "<<c[i]<<" ";
        i++;
    }
    return 0;
}