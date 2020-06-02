// Versión estandar el problema con Busqueda bianria
#include<bits/stdc++.h>
using namespace std;
int main(){
    // Me imprime el la posición del primer elemento 
    // elemento en la lista que es igual o mayor a n.
    int v[]={1,2, 3, 3, 7, 10, 15, 18, 20, 25, 30};


    int l=0, r=sizeof(v)/sizeof(v[0])-1, M;
    
    for(int i=l; i<=r; i++) cout<< v[i] <<" ";
    cout<<"\n";

    int n=3; // imprimir la posicion del primer elemento que es mayor o igual a n
    int k=0;
    while(l < r){

    M=(l+r)/2;

    if(v[M] >= n) r=M;
    else l=M+1;
    cout<<"Esta es la iteración número "<<++k<<"\n";
    for(int i=l; i<=r; i++)cout<<v[i]<<" ";
    cout<<"\n";
    }

    cout<<r<<"\n";

    
return 0;
}