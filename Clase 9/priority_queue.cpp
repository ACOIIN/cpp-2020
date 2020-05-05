#include<bits/stdc++.h>
using namespace std;

/* cola de prioridad que ordena de manera decreciente
si se quiere ordenar de manera creciente añadir queue de este modo


priority_queue<int,vector<int>, greater<int> > q;  */


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.setf(ios::fixed);
    cout.precision(4);
    
    priority_queue<int> q;          
    
    q.push(3);
    q.push(5);
    q.push(7);
    q.push(2);

    // 3 5 7 2
    // 7 5 3 2


    cout << q.top() << "\n"; // 7
    q.pop();

    // 5 3 2

    cout << q.top() << "\n"; // 5
    q.pop();

    // 3 2

    q.push(6);
    
    // 6 3 2

    cout << q.top() << "\n"; // 6
    q.pop();
    // 3 2

return 0;
}