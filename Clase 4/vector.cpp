#include<bits/stdc++.h>
using namespace std;
int main(){
    //Arreglos deinamicos = vactores
    // vector<tipo_de_dato> V

    vector<int> V;

    V.push_back(100);
    // 100 ...
    V.push_back(2);
    // 100 2 ...
    V.push_back(3);
    // 100 2 3
    int aux, n;
    vector<int> V2;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>aux;
        V2.push_back(aux);
    }
    for(int i=0; i<n; i++){
        cout<<V2[i]<<" ";
    }
    cout<<"\n";

    vector<string> palabras;
    int k;
    string aux1;
    cin>>k;
    for(int i=0; i<k; i++){
        cin>>aux1;
        palabras.push_back(aux1);
    }
    for(int i=0; i<k; i++){
        cout<<palabras[i]<<" ";
    }
    cout<<"\n";
    

    // _ _ _ _ _ _ _ _ _ _
    // _ _ _ _ _ _ _ _ _ _
    // _ _ _ _ _ _ _ _ _ _
    // __ __ _ _ _ _ _ _ _
     
return 0;
}