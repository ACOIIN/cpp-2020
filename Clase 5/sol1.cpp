#include <iostream>
#include<bits/stdc++.h>
#include<math.h>
#include<iomanip>
// <>
using namespace std;

int main(){
    int a,b;
    vector<int> v;

    cin >> a;

    v.resize(a);

    for(int i=0 ; i < v.size() ; i++  ){
        cin >> v[i]; 
        if(v[i]%2==0){

            cout << v[i] << " "; 

        }
    }

return 0;
}