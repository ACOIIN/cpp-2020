#include <bits/stdc++.h>
using namespace std;

#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);

int main() {
    OJ;

    int n, f[100005];
    cin >> n;
    cout << n;
    for (int i = 0; i < n; i++) cin >> f[i];
    int uno = 0;
    vector<int> v;
    for (int i = 0; i < n; i++) {
        uno++;
        cout << uno;
        if (f[i] != f[i + 1]) {
            v.push_back(uno);
            uno = 0;
        }
    }
    v.push_back(uno);
    for (auto x : v) cout << x << " ";
    int sol = 0;

    for (int i = 0; i < v.size(); i++) {
        sol = max(sol, min(v[i], v[i + 1]));
    }

    cout << 2 * sol << "\n";

    return 0;
}