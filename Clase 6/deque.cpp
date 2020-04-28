#include<bits/stdc++.h>
using namespace std;

int funcion(int x){
    return x;
}

void main(void){         
    deque<int> s;    // tipo_estruc<tipo_dato> nombre;
    
    // ______

    s.push_back(3);  

    //   _____ 3                    
    
    s.push_front(2);

    // 2, 3
    
    
    s.push_front(5);

    // 5, 2, 3
    
    cout << s.front()<<"\n";      // 5


    s.pop_front();

    // 2, 3
    cout << s.back()<<"\n";     // 3
    
    s.pop_back();    

    // 2                    
cout << s.front()<<"\n";    // 2
cout << s.back() <<"\n";    // 2
cout << s.size()<<"\n";    // 1
                                
if(!s.empty()) cout<<"NO está vacío"; 




}
