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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.setf(ios::fixed);
    cout.precision(4);
    cin >> n;
    search(0);
     
return 0;
}