#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>> v(3);
    int aux;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin>>aux;
            v[i].push_back(aux);
        }
    }
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<v[i][j]<<" ";
        }
        cout<<"\n";
    }


    // vect[0] _10_ _3_ __ __ __ __ __ __ ___ 
    // vect[1] _10_ __ __ __ __  __
    // vect[2] _10_ __ __ __ __ __
    // vect[3] __ __ __ __ __ 
    // vect[4] __ __ __ __ __  
    // vect[5] _10_ __ __ __ __ 
     
return 0;
}