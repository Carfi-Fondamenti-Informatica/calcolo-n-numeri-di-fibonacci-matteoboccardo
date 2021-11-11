#include <iostream>
using namespace std;

int main() {
     int n=0, precedente=0, successivo=1, risultato=0;
    cin>>n;
    cout<<1<<endl;
    if(n>=2){
        for(int i=2;i<=n;i++){;
            risultato=precedente+successivo;
            cout<<risultato<<endl;
            precedente=successivo;
            successivo=risultato;
        }
    }
   return 0;
}
