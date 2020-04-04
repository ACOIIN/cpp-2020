//Tipos de datos que nos faltaba ver. Float, double, char, bool
//Los que hemos visto hasta ahora son: int, string

#include<bits/stdc++.h>
using namespace std;



int main(){

    //Float= Son datos decimales. 
    
    float pi=3.14;  // Tipo de dato que se acemeja a un decimal
                    // Tal como los enteros, acepta las operaciones de +, -, *

    pi=pi*3;        // Le sumamos 3 a pi

    cout<<"pi= "<<pi<<"\n"; 

    pi-=3;          // Restamos 3 a pi
    
    float e=2.7, producto;

    producto= e*pi;  //multiplicar entre dos float

    pi=pi/3;
    cout<<"pi es igual a: "<<pi<<"\n";

   // cout<<"el producto entre e y pi es: "<<producto<<"\n";

    // Double


    double pi1=3.142882828;  // Tipo de dato que se acemeja a un decimal
                              // Tal como los enteros, acepta las operaciones de +, -, *, /

    pi1=pi1+3;        // Le sumamos 3 a pi

    cout<<"pi1= "<<pi1<<"\n"; 

    pi1-=3;          // Restamos 3 a pi
    
    double e1=2.7, producto1;

    producto= e1*pi1;

    cout<<"el producto entre e y pi es: "<<producto1<<"\n";

    // Char=caracter k l i ( ) { }

   char hola='&';


   cout<<"el valor del char es: "<<hola<<"\n";



    // bool 0 1 

    bool t=true, f=false;

    if(!t){

        cout<<"t es verdadero\n";
    }
    if(!f){
        cout<<"f es false\n";
    }


    // AHORA SABEMOS!!! int, float, char, string, bool

return 0;
}