#include <bits/stdc++.h>
using namespace std;

#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);

int v[100];

bool Thanos_Tabien(int k, int j) {
    bool sorted = true;
    for (int i = k; i < j; i++) {
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

    for (int i = n; i > 1; i /= 2) {
        for (int m = i; m <= n; m + i) {
            if (Thanos_Tabien(m - i, m - 1) == true) {
                cout << i;
                return 0;
            }
        }
    }

    return 0;
}