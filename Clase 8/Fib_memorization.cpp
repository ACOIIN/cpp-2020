// Fibonacci con memoria

#include<bits/stdc++.h>
using namespace std;

vector<int> FIB(10000, -1); // -1, -1, -1, -1, ...

int fib(int n){
    if(FIB[n]!=-1){
        return FIB[n];
    }

    // Sólo van a apsar los fib(n) que no hemos calculado

    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    
    return FIB[n]= fib(n-1)+fib(n-2);
    
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.setf(ios::fixed);
    cout.precision(4);
    
    int n=30;
    cout<<"Fib "<<n<<" es igual a: "<<fib(n)<<"\n";
     
return 0;
}