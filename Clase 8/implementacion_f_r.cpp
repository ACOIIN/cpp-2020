// Implementación de una función recursiva
// FIBONACCI

// f_0=0, f_1=1, f_n=f_(n-1)+f_(f-2) con n>1

// 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55...
// 0, 1, 2, 3, 4, 5, 6, 7,   8,  9,  10...
#include<bits/stdc++.h>

int fib(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    else{
        return fib(n-1)+fib(n-2);
    }
}

using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.setf(ios::fixed);
    cout.precision(4);
    
    int n=100;

    cout<<"Fib "<<n<<" es igual a: "<<fib(n)<<"\n";
     
return 0;
}