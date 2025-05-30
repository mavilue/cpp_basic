#include <bits/stdc++.h>

using namespace std;

int main(){

    int i,n,x,y,soma,troca;

    cout << "Digite dois numeros:" << endl;
    cin >> x;
    cin >> y;

    if (x>y) {
        troca = x;
        x = y;
        y = troca;
    }

    soma=0;
    for (i=x+1;i<y;i++) {
        if (i % 2 != 0) {
            soma = soma + i;
        }
    }

    cout << "SOMA DOS IMPARES = " << soma;
    return 0;
}
