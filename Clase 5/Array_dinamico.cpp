// Estructura de datos


// Vectores->Array dinamico
// Set->Conjuntos
// MultiSet->
// Map-> Mapas/Diccionario
// Queue-> Cola
// Stack-> Pila
// Deque->



#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;
    //Maneras de ingresar elementos

    v.push_back(3); // 3...
    v.push_back(2); // 3, 2...
    cout<<v[0]<<" "<<v[1]<<endl;


    
    //Es ivalido hacer "v[2]=1;"


    // Pero despues de la siguiente funcion si puedo hacerlo
    
    v.resize(10);  // _ _ _ _ _ _ _ _ _

    v[2]=1;          // 3, 2, 1...
    cout<<v[2]<<endl;

    //Maneras de inicializar un vector


    vector<int> z(10, 0); //  (x, y)
    // 0, 0, 0, 0, 0... 0
    


    //Recorrer un vector

    for(int i = 0 ; i < z.size(); i++){
        cout << z[i] << "\n";
    }


    // EJERCICIO 1: Dado una lista de numeros ingresada por el
    // usuario. Imprimir solo los pares de regreso.
    // Obs: primero te dan la cantidad de numeros del largo de la lista.

    // Caso ejemplo:
    //  Input:                output:
    //  5                     12 2 100
    //  12 11 23 2 100

    // 


    // MANERA EFICIENTE DE HACERLO
    for(auto x : v){  
        cout<<x<<"\n";
    }

    vector<int> w;
    w.resize(4);
    for(auto& x : w){
        cin>>x;
    }

    v.pop_back();
    


return 0;
}