// Implementación de funciones recursivas con factoriales

// f_0=1                         0!=1
// f_n=n*f_(n-1)                 n!=n*(n-1)! n>0

#include<bits/stdc++.h>
using namespace std;

int fac(int n){
    if(n==0){
        return 1;
    }
    else{
        return n*fac(n-1);
    }
}

//  f(4)=4*f(3)=4*3*f(2)=...


int main(){
    
    int x = 4;

    cout<<"El factorial de "<<x<<" es: "<<fac(x)<<"\n";
    
    
     
return 0;
}