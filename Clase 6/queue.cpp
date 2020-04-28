#include<bits/stdc++.h>
using namespace std;
// queue= fila
// PRIMERO EN ENTRAR -> PRIMERO EN SALIR

int main(){
    queue<int> q;                //Definimos queue en los enteros
    
    q.push(3);                       // .push() ingresa un elemento a la cola

    // 3
    
    q.push(2);

    // 3, 2
    
    q.push(5);

    // 3, 2, 5
    
    cout << q.front()<<"\n"; // 3    // .front() me regresa el primer 
                                     // en la cola
                                     
    cout << q.back()<<"\n"; // 5       regresa el último elemento en la cola

    q.pop();                         // .pop() me elimina el primer elemento
    
    // 2, 5
    cout << q.front()<<"\n"; // 2
    
    q.emplace(1);                    // .emplace() ingresa un elemento al final de 
                                     // la cola
    // 1, 2, 5
    cout<<q.front()<<"\n";
    
    if(q.empty()) cout<<"Vacio\n";  // me dice si está vacío la cola

    if(! q.empty()) cout<<"Si tiene elementos\n";
    
    cout<<q.size()<<"\n"; //2           .size() me da la cantidad de elementos
return 0;
}
