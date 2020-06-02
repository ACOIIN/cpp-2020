#include <bits/stdc++.h>
using namespace std;

#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);

int main() {
    OJ;

    int v[]= {2, 1, 4, 3};
    int n=4;

    
    for (int i = 0; i < n; i++) {

        for(int k=0; k< n; k++) {
            cout<< v[k]<<" ";
        }
        cout<<"\n";
                

        for (int j = 0; j < n-1; j++) {
            if (v[j] > v[j+1]) {
                swap(v[j], v[j+1]);
            }
        }
    }

    for(int i=0; i<n; i++) cout<< v[i]<<" ";
    cout<<"\n";

    return 0;
}