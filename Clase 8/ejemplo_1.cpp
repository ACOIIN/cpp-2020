#include<bits/stdc++.h>
using namespace std;


void permutar(int &a, int &b){

    int aux;
    aux=a;
    a=b;     // a -> b'
    b=aux;   // b -> a'


}
int main(){

    
    int x, y;
    cout <<"Ingresa los valores de x e y\n";
    cin>> x >> y;

    permutar(x, y);
    // x e y se mantenia 

    cout<<" el nuevo valor de x es: "<< x << "\n";
    cout<<" y el nuevo valor de y es: " << y <<"\n";
return 0;
}