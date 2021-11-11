#include <iostream>
using namespace std;

int main() {
    int n=0, precedente=0, successivo=1, risultato =0, i=0;
    precedente=i;
    cin>>n;
    cout<<1<<endl;
    for (int i = 2; i <=n ; i++) {
        risultato = precedente + successivo;
        precedente = successivo, successivo = risultato;
        if (risultato <= n) {
            cout << risultato << endl;
        }
    }
   return 0;
}
