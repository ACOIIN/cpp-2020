#include<bits/stdc++.h>
using namespace std;



int a, b;




int suma(int a, int b){
    return a+b;
}
int maximo(int a, int b){
    if(a>b){
        return a;
    }
    else return b;
}

int max_array(int v[], int n){
    int aux=0;
    for(int i=0; i< n;i++){
        aux=max(aux, v[i]); 
    }
    return aux;
}

void print(int v[], int n,  int c, int a, int x){
    int a;
    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
    cout<<"\n";
}

int c(){

    cout<<"hola";
    return a+b;
}

string f(string a, string b){
    return a[0]+a[1]+a[2]+b[0]+b[1]+b[2];
}


int main(){
    
    
    cout<<suma(1,3)<<"\n";
    cout<<max(1, 2);

    c(); // hola
     
return 0;
}