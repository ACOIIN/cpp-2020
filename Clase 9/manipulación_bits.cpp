// Mainpulación de Bits

#include<bits/stdc++.h>
using namespace std;

// Operación "and"(&)  22 & 26 = 18    V&V=V 
// V-> 1, F-> 0

// 1 & 1 = 1 
// 0 & 1 = 0
// 1 & 0 = 0
// 0 & 0 = 0

// 22 & 26 =18

//    1 0 1 1 0 (22)
//  & 1 1 0 1 0 (26)
//  -----------
//  = 1 0 0 1 0 (18)

// 1000000 & 00000001 = 0  Par
// 1000001 & 00000001 = 1  Impar


// Operación "or"( | )   22 | 26 = 30   altgr+1 = |

// 1 | 1 = 1 
// 0 | 1 = 1
// 1 | 0 = 1
// 0 | 0 = 0

//   1 0 1 1 0 (22)
//  &1 1 0 1 0 (26)
//  -----------
//  =1 1 1 1 0 (30)


// Operación "Xor"(^)   22 ^ 26 = 12
// ó 

// 1 ^ 1 = 0 
// 0 ^ 1 = 1
// 1 ^ 0 = 1
// 0 ^ 0 = 0

//   1 0 1 1 0 (22)
//  &1 1 0 1 0 (26)
//  -----------
//  =0 1 1 0 0 (12)


// (p->q == -q & p)


// Bit shifts << >>


// x<<k =  x*2^k

// x = 5 = 101  _   2
// x<<2 = 10100

// x>>k = x/2^k (piso)

// x = 5 = 101
// x>>2 = 1


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.setf(ios::fixed);
    cout.precision(4);

    int x=10;
    // x en representación binaria
    // x=1010
    
    for(int i=31; i>=0; i--){
        
        if(x & (1 << i)) cout<<"1";
        else cout << "0";
    }
    cout<<"\n";
    
    
     
return 0;
}