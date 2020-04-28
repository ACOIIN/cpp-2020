// Función del Máximo Común Divisor con algoritmo de Euclides.
// PSU!!!

#include<bits/stdc++.h>
using namespace std;

// mcd(22,30)-> mcd(22, 30-22)=mcd(22, 8)-> mcd(22-8, 8)=mcd(14,8)
// ->mcd(6, 8)->mcd(6, 2)-> mcd(4, 2) -> mcd(2, 2)-> mcd(0, 2)


int mcd(int a, int b ){
    
    if(a==0){
        return b;
    }

    // Me aseguro que "a" siempre sea mayor
    if(a<b){
        swap(a, b);  // swap -> permutar los valores de dos números
    }

    return mcd(a-b, b);
}

// Pero podría ser del estilo mcd(1000000, 2)-> mcd(1000000-2, 2)-> mcd(1000000-2-2, 2)...
// Así que hacemos una optimización con mod(%)

int mcd_op(int a, int b){
    if(b==0){
        return a; 
    }
    else{
        return mcd_op(b, a%b);   // Acá no me afecta cuando b es mayor que a porque a%b=a
    }
}



int main(){
    
    int x, y; cin >> x >> y;

    cout << mcd(x, y) << "\n";

    cout << mcd_op(x, y) << "\n";
      
return 0;
}