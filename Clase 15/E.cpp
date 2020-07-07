#include <bits/stdc++.h>

// <>

using namespace std;

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int a[3];
    cin >> a[0] >> a[1] >> a[2];
    cout << max(a[0], max(a[1], a[2])) - min(a[0], min(a[1], a[2])) << "\n";
    return 0;
}