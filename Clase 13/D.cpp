#include <bits/stdc++.h>
using namespace std;

#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);

int main() {
    OJ;

    int n, v[10010];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    for (int i = n; i > 0; i /= 2) {
        for (int j = 0; j < n; j += i) {
            /*for (int k = j; k < j + i; k++) cout << a[k] << " ";
            cout << "\n";*/
            if (is_sorted(v + j, v + j + i)) {
                cout << i << "\n";
                return 0;
            }
        }
    }

    return 0;
}