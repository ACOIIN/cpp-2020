#include <bits/stdc++.h>
using namespace std;

#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);

int v[100];

bool Thanos_Tabien(int k, int j) {
    bool sorted = true;
    for (int i = k; i < j - 1; i++) {
        if (v[i] > v[i + 1]) sorted = false;
    }

    return sorted;
}

#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);

int main() {
    OJ;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> v[i];

    for (int i = n; i > 0; i /= 2) {
        // revisar largos correspondientes
        // n, n/2, n/4...
        // 8, 4, 2, 1
        for (int m = 0; m < n; m += i) {
            if (Thanos_Tabien(m, m + i - 1) == true) {
                cout << i;
                return 0;
            }
        }
    }
    //               i=2
    //               1 2 3 4 5 6 7 8 9 10

    return 0;
}