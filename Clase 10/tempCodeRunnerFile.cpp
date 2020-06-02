#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.setf(ios::fixed);
    cout.precision(4);
    
    int v[]={1, 3, 7, 10, 15, 18, 20, 25, 30};
    int l=0, r=sizeof(v)/sizeof(v[0])-1, M;
    int n=1;
    while(l-r!=0){
    M=(l+r)/2;
    if(v[M]== n ){
        cout<<M<<"\n";
        break;
    }
    if(v[M] > n ) r=M;
    if(v[M] < n ) l=M;
    }

    // Restricciones de este método: 
    // 1) debe estar ordenado de menor a mayor
    // 2) Si no está el número buscado no pasa nada.
    // 3) Si en la lista está más de una vez sólo se va 
    // a imprimir uno
return 0;
}