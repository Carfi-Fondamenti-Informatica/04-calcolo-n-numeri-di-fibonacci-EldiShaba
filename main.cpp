#include <iostream>
using namespace std;
int main(){
    int n1=0,n2=1,n3,i,numero;
    cout<<"numeri di elementi ";
    cin>>numero;
    if(numero>2){
        cout<<n1<<endl;
        for(i=0;i<numero-1;i++){
            n3=n1+n2;
            cout<<n3<<endl;
            n1=n2;
            n2=n3;
    }}
    else
        cout<<"errore";
    return 0;
}
