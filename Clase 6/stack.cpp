#include<bits/stdc++.h>
using namespace std;
// ÚLTIMO EN ENTRAR-> PRIMERO EN SALIR
// stack=pila
// a, b, c, d
// d

// a, b, c
// c

int main(){

    stack<int> s;                // Se define el stack
    
    s.push(3);                       // .push sirve para colocar elementos arriba

    // 3
    
    s.push(2);

    // 2, 3
    
    
    s.push(5);

    // 5, 2, 3
    
    cout << s.top()<<"\n"; // 5     // top() devuelve el elemento de arriba
    
    s.pop();                        // .pop() elimina el elemtno de arriba

   // 2, 3


cout << s.top()<<"\n"; // 2


cout << s.size()<<"\n";// 2     // .size() regresa la cantidad de elementos 
                                // del stack  

    s.pop();
    s.pop();
    
if(s.empty()) cout<<"Vacío\n";    // regresa cuando el stack está vacío
    return 0;
}
