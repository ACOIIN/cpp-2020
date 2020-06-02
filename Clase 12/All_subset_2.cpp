
// Metodo con bits mask
// Veamos que existe una biyección entre los números de largo n
// compuestos de unos y ceros y los subconjuntos de un conjunto con n elementos.
//Ejemplo:
// A={1, 2, 3, 4}  1 y 0, y de largo 4

// A'={1, 2}  <=> 1100
// A''={1, 4} <=> 1001
// A'''={3}   <=> 0010
// A''''={}   <=> 0000

// 1= si está y 0 si no está.

#include <bits/stdc++.h>
using namespace std;

#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);

int main() {
    OJ;
    /*
    10 19 20 30...
    0 hasta el 15...
    
    A={1, 2, 3, 4}
    0 = {}
    1 = 0001 =>{4}
    2 = 0010 =>{3}
    3 = 0011 =>{3, 4}
    4 = 0100 =>{2}
    ....
    2^4 -1 = 15 = 1111 ={1,2,3, 4}.
    ...
    n de elementos
    2^n -1 = 111111...1 = {1, 2, 3, ...}
    */
    int n;
    cin >> n;

    // b=0 .... b=2^n-1=15
    // 10000=1*2^4
    // pow(2, n)=(1 << n)= 10000=2^n
    // A= {0, 1, 2, 3}
    for (int b = 0; b < (1 << n); b++) {  // va desde el 0 hasta el 2^n-1

        vector<int> subset;  // elementos si me voy a tomar
        cout << "El valor de b = " << b << "\n";
        // int b = 4 = 0100
        //         i=  0123
        // pow(2, i) =(1 << i) =b & 0001000
        // b = 5 = 0101
        // i= 0, 1, 2,... n-1.
        // b & (1 << i) =true

        // 0101 & 0001 i=0 true
        //  push_back(1)

        // 0101 & 000000010 i=1 false
        //

        // 0101 & 000000100 i=2 true
        // push_back(3)

        // b=5
        // v= 1, 3

        // 0101 & 000001000 i=3 false

        for (int i = 0; i < n; i++) {  // leemos el b en base binaria
            if (b & (1 << i)) {        // revisa si el i-digito es un 1
                subset.push_back(i + 1);
            }
        }

        // Imprime subset
        for (auto x : subset) {
            cout << x << " ";
        }
        cout << "\n";
    }

    return 0;
}