#include<bits/stdc++.h>
using namespace std;
int main(){
    string ecuacion;
    while(cin >> ecuacion){
        stack<int> balanciado;
        for(int i=0; i<ecuacion.size(); i++){
            if(ecuacion[i]=='('){
                balanciado.push(1);
            }
            if(ecuacion[i]==')') {
                balanciado.pop();
            }
        }
        if(balanciado.empty()){
            cout<<"incorrect\n";
        }
        else{
            cout<<"correct\n";
        }
    }
return 0;
}