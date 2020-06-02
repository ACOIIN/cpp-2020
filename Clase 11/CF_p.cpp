#include<bits/stdc++.h>
using namespace std;

// Hay una persona 
// i-problema 5*i: 5, 10, ...50

// 20:00 => 24:00

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.setf(ios::fixed);
    cout.precision(4);
    
    int time_prob[]={5, 10, 15, 20, 25, 30, 35, 40, 45, 50};

    int time_prob_total[]={5, 15, 30, 50, 75, 105, 140, 180, 225, 275};
                                           
    int time=240;

    int n, k; cin >> n >> k;

    time-=k; // Tiempo actualizado = 31

    // ¿Cuál es nuestra pregunta?

    // ¿Cuál es el mayor número menor o igual a time?

    // = ¿Cuál es el menor numero mayor a time? - 1

    int l=0, r=n, m;

    int n;
    while (l < r){

        m=(l+r)/2; // Cuantas veces voy a poder dividir por 2?

        // log_2 (n) =k  ssi 2^k=n



        // n=8
        // log_2 (8)= 3

        if(time < time_prob_total[m]) r=m;

        else l=m+1;
    }

    cout<<l<<"\n";
    
return 0;
}