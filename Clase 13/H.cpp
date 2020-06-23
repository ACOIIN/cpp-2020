#include <bits/stdc++.h>
using namespace std;
#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);

int main() {
    OJ;
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int v[n];
        for (int i = 0; i < n; i++) cin >> v[i];
        sort(v, v + n);
        int ans = 100000;
        for (int i = 0; i < n - 1; i++) {
            ans = min(ans, abs(v[i] - v[i + 1]));
        }
        cout << ans << "\n";
    }
    return 0;
}