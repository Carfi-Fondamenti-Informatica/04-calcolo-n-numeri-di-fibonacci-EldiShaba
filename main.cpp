
#include <iostream>
using namespace std;
int main(){
    int n1=0,n2=1,n3,i,number;
    cout<<"numeri di elementi ";
    cin>>number;
    if(number<=2){
        cout<<"errore";
    }
    else cout<<n1<<" "<<n2<<" ";
    
    for(i=2;i<number;++i){
        n3=n1+n2;
        cout<<n3<<" ";
        n1=n2;
        n2=n3;
    }
    return 0;
