#include <bits/stdc++.h>
using namespace std;

#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);

int main() {
    OJ;
    int n, m, s = 0, x;
    cin >> n >> m;
    int v[n];
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort(v, v + n);

    int i = 0;
    while (m--) {
        if (v[i] > 0) break;
        s -= v[i];
        i++;
    }
    cout << s << "\n";
    return 0;
}