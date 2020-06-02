#include<bits/stdc++.h>
using namespace std;
vector<int> subset;

int n; // Cantidad de elementos del vector
// Back traking
void search(int k){
    if(k==n){
        for(auto x: subset){
            cout<<x<<" ";
        }
        cout<<"\n";
    }
    else{
        search(k+1);
        subset.push_back(k);
        search(k+1);
        subset.pop_back();
    }
}

int main(){
    
    cin >> n;
    search(0);
     
return 0;
}