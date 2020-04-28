// Creen una funcion recursiva que me calcule n^k

#include<bits/stdc++.h>
using namespace std;

int rec(int n, int k) {
    if (k == 0) {
        return 1;
    }
    else {
        return n * rec(n, k-1);
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.setf(ios::fixed);
    cout.precision(4);
    
    int n, k;
    cin >> n >> k;
    cout << rec(n, k) << "\n";
    
     
return 0;
}