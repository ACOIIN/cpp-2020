#include <bits/stdc++.h>

// <>

using namespace std;

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n, aux = 0, aux2 = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        aux2++;
        if (a[i] > a[i + 1]) {
            aux = max(aux, aux2);
            aux2 = 0;
        } else {
            aux = max(aux, aux2);
        }
    }
    cout << aux2 << "\n";
    cout << aux << endl;

    return 0;
}
