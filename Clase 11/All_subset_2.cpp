
// Metodo con bits mask
// Veamos que existe una biyección entre los números de largo n
// compuestos de unos y ceros y los subconjuntos de un conjunto con n elementos.
//Ejemplo:
// A={1, 2, 3, 4}  1 y 0, y de largo 4

// A'={1, 2}  <=> 1100 
// A''={1, 4} <=> 1001
// A'''={3}   <=> 0010
// A''''={}   <=> 0000 

#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.setf(ios::fixed);
    cout.precision(4);

    A{1, 2, 3, 4}
    0 =>{}
    1= 0001 =>{4}
    2= 0010 =>{3}
    3= 0011 =>{3, 4}
    4= 0100 =>{2}
    ....
    2^n-1= 11111 ={1,2,3...}
    int n;
    cin >> n;

    for(int b=0; b < (1<<n); b++){  // va desde el 0 hasta el 2^n-1
        vector<int> subset;
        for(int i=0; i<n; i++){
            if(b&(1<<i)){    // revisa si el i-digito es un 1
                subset.push_back(i);
            }
        }
        for(auto x : subset){
            cout<<x<<" ";
        }
        cout<<"\n";
    }
     
return 0;
}