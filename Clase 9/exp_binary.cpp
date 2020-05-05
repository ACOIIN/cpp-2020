// Exp. binary



#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

// 7 = 4+2+1 = 111
// 2^7=2^(4+2+1)= 2^4 * 2^2 * 2^1

ll binpow(ll a, ll b) {

    ll res = 1;
    while (b > 0) {
        if (b & 1){  // Verifico si el último bit de b es 1
            cout<<res<<" * "<<a<<"\n";
            res = res * a;
            
        }
        a = a * a;   // Voy aumentando el valor de a para multiplicarlo a la respuesta
        b >>= 1; // b= b >> 1   Muevo uno hacia la derecha los bits de b  ejm: 111->11
          
    }

    return res;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.setf(ios::fixed);
    cout.precision(4);
    
    
    cout<<binpow(3, 7)<<"\n";


return 0;
}