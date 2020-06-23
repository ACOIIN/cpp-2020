#include <bits/stdc++.h>
using namespace std;

#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);

int main() {
    OJ;
    int n, m;
    cin >> n >> m;
    int v[n];
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    for (int i = 0; i < n; i++) {
        bool orden = true;

        for (int j = 0; j < n - 1; j++) {
            if (v[j] > v[j + 1]) {
                swap(v[j], v[j + 1]);
                orden = false;
            }
        }
        if (orden == true) break;
    }
    int sol = 0;
    for (int i = 0; i < n; i++) {
        if (i > m - 1) {
            break;
        }
        if (v[i] < 0) {
            sol += v[i];
        }
    }

    cout << abs(sol) << "\n";
    return 0;
}

/*

   Sol Javi y  Zuny:
   1) Ordenar de menor a mayor.
   2) Recorremos Array.
   3) Los negativos los sumamos a un valor aux teniendo en cuenta un contador.
   4) if contador > m-1. Paramos de sumar
   5) imprimir abs(suma)

   -1 -1 -1 -1 0 0 0 0 0 -10000
*/