#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, a, b;
    cin >> N;  // N cantidad de aristas
    vector<int> adj[N];

    for (int i = 0; i < N; i++) {
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    for (int i = 0; i < N; i++) {
        cout << "Nodo " << i << " contectado con:... ";
        for (auto x : adj[i]) {
            cout << x << " ";
        }
        cout << "\n";
    }

    return 0;
}
