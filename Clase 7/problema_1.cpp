#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int t; cin >> t;
    vector<int> pares, impares;
    int aux;
    for(int i=0; i<t; i++){
        cin >> aux;


        if(aux%2==0){
            pares.push_back(aux);

        }
        else{
            impares.push_back(aux);
        }
    }


    sort(impares.begin(), impares.end()); // ORDENA!!!
    sort(pares.begin(), pares.end());


    // van a estar ordenados de menor a mayor

    for(int i=0; i<pares.size(); i++){
        cout<<pares[i]<<"\n";
    }
    // . . . .. . .

    for(int i=impares.size()-1; i>=0; i--){
        cout<<impares[i]<<"\n";
    }


return 0;
}