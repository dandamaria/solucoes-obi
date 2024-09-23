#include <bits/stdc++.h>

using namespace std;

/*Insertion sort ,  Merge Sort  e  Bubble Sort são estáveis, enquanto Heap Sort  e Quick Sort não são.*/


int main(){

    vector<float> a={1.20f , 1.30f, 1.50f, 1.30f, 2.50f, 14.62f, 5.20f};
    int n = sizeof(a)/sizeof(a[0]);


    vector<float> buckets[n];
    
    for(int i=0;i<n;i++){
        int x = n*a[i];
        buckets[x].push_back(a[i]);
    }

    for(int i=0;i<n;i++){
        sort(buckets[i].begin(),buckets[i].end());
    }


    int index=0;
    for(int i=0;i<n;i++){
        for(size_t j=0;j<buckets[i].size();j++){
            a[index++] = buckets[i][j];
        }
    }

    
    for (int i = 0; i < n; i++) {
        cout<<a[i]<<"teste";
    }


    return 0;
}