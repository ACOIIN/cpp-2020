// Estructura de datos-> Mapas

#include<bits/stdc++.h>
using namespace std;
// "PAPA"  1 2 3 4 5 6 7 8 9
// 2       2 1 0 0 0 0 0 0 0 
// Dato1 <-> Dato2
// Generalizacion de un Array
// Array = Conjunto de los Naturales <-> Dato

// "monkey" -> 4
// "a"-> 3
// a b c d e f g...
// 1 1 1 2 3 4 5...
// m["monkey"]=4

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.setf(ios::fixed);
    cout.precision(4);

    // map< key, tipo_dato>> M

    map <string, int> m;               // defino mi mapa como una asocicion de string con enteros
    m["monkey"] = 4;                   // de este modo defino enteros asociados a algún string
    m["banana"] = 3;
    m["harpsichord"] = 9;

    m.insert(pair< string, int > ("aybabtu", 2) );// === ["aybabtu"] = 2;

    cout << m["banana"] << "\n"; // 3
    cout << m["aybabtu"] << "\n"; // 2

    m.erase("aybabtu");
    
    cout << m["aybabtu"] << "\n"; // 0 // si pido el valor de algun string que no le haya 
                                       // asociado nada me devolverá 0

    if (m.count("aybabtu")) {          // esta funcion verifica si dicho string esta en el mapa
    // key exists
    cout<<"Si está!!\n";
    }

    if(m.empty()) cout<<"Está vacio\n";   // empty() me dice si está vacio el mapa

    if(!m.empty()) cout<<"No está vacio\n";


    cout<< m.size()<<"\n";  // .size() me dice cuantos elementos hay en el mapa


    for (auto x : m) {                 //  de esta manera veo todas las kays del mapa
    
    cout << x.first << " " << x.second << "\n";  // Notese que están ordenados por el primer dato del par
    }
    
     
return 0;
}