#include <bits/stdc++.h>

// <>

using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n, aux = 10000000;
        cin >> n;
        int a[n];
        for (int j = 0; j < n; j++) cin >> a[j];

        sort(a, a + n);

        for (int j = 0; j < n - 1; j++) {
            aux = min(aux, abs(a[j] - a[j + 1]));
        }

        cout << aux << endl;
    }

    return 0;
}