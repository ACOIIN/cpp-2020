// Imprimir todos los subconjutos
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.setf(ios::fixed);
    cout.precision(4);
    
    int set[]={1, 2, 3, 4};

    // ejemplo: 
    // {1, 2, 3} = {sí, sí, sí, no} = 1110
    // {1, 4} = {sí, no, no, sí} = 1001

    for(int mask = 0; mask<pow(2, 4); mask++){ 
        for(int i = 0; i < 4; i++){
            if(mask & (1 << i)) cout << set[i]; 
        } 
    cout << endl; 
    } 
     
return 0;
}