#include <bits/stdc++.h>
using namespace std;

#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);

int main() {
    OJ;
    int v[]= { 3, 4, 10, 2, 5, 9, 1};
    int n = 7;

    int i, key, j;  
    for (i = 1; i < n; i++){  
        
        for(int k=0; k<=i; k++) {
            cout<< v[k]<<" ";
        }
        cout<<"\n";

        key = v[i];  
        j = i - 1;  
        while (j >= 0 and v[j] > key){  
            v[j + 1] = v[j];
            j = j - 1;  
        }  
        v[j + 1] = key; 
    }  

    for(i=0; i<n; i++) cout<< v[i]<<" ";
    cout<<"\n";
    return 0;
}