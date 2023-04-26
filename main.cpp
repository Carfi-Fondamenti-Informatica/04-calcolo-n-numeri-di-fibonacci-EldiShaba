
#include <iostream>
using namespace std;
int main(){
    int n1=0,n2=1,n3,i,numero;
    cout<<"numeri di elementi ";
    cin>>numero;
    if(numero>2){
        cout<<n1<<endl;
        cout<<n2<<endl;
        for(i=2;i<numero;++i){
            n3=n1+n2;
            cout<<n3<<endl;
            n1=n2;
            n2=n3;
    }}
    else
        cout<<"errore";
    return 0;
}
