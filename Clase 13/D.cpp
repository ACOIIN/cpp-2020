#include <bits/stdc++.h>
using namespace std;

#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);

int main() {
    //OJ;

    int n, j, i = 0, a[10010];
    for (cin >> n; i < n; i++) {
        cin >> a[i];
    }
    for (i = n; i > 0; i /= 2) {
        for (j = 0; j < n; j += i) {
            /*for (int k = j; k < j + i; k++) cout << a[k] << " ";
            cout << "\n";*/
            if (is_sorted(a + j, a + j + i)) {
                cout << i << "\n";
                return 0;
            }
        }
    }

    return 0;
}