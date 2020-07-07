#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;

#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);                   \
    cout.precision(4);

int main() {
    OJ;
    FIO;

    int Grafo_1[10][10];  // 0 a 9.

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            Grafo_1[i][j] = 0;
        }
    }

    // Nodo 1 esta conectado con el nodo 7
    int n, a, b;
    cin >> n;  // Cantidad de aristas.

    for (int i = 0; i < n; i++) {
        cin >> a >> b;  // nodo A esta conectado con B, ->
        Grafo_1[a][b] = 1;
    }

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            cout << Grafo_1[i][j];
        }
        cout << "\n";
    }

    return 0;
}