#include <iostream>
using namespace std;

int main() {
    int numero1 = 0,numero2 = 1,prossimo_numero = 0, n;
    cin >> n;
    cout << "Serie di fibonacci " << numero1 << ", " <<numero2 << ", ";
    prossimo_numero = numero1 + numero2;

    while(prossimo_numero <= n) {
        cout << prossimo_numero << ", ";
        numero1 = numero2;
        numero2 = prossimo_numero;
        prossimo_numero = numero1 + numero2;
         }
    return 0;
}
