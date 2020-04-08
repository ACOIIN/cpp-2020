#include<bits/stdc++.h>
using namespace std;
int main(){
    int aux;
    vector<int> v;
    while(cin>>aux){
        v.push_back(aux);
    }
    for(int i=0; i<v.size(); i++){
        if(v[i]%2==0){
            cout<<v[i]<<"\n";
        }
    }


return 0;
}