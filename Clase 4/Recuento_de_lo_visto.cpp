#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=10;
    cout<<"Respetición con for: \n";

    for(int i=1; i<=n; i++){
        cout<<" i es igual a: "<<i<<"\n";
    }


    cout<<"Ahora una repetición con while: \n";

    while(n>0){
        cout<<"n es igual a: "<<n<<"\n";

        n--;
        

    }
    cout<<"Fin del código\n";
    
return 0;
}