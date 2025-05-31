#include <bits/stdc++.h>

using namespace std;

int main(){

    int i,n;

    cout << "Quantos alunos serao digitados? ";
    cin >> n;

    string nome[n];
    double ab1[n],ab2[n];
    double media_notas;
    for (i=0; i<n; i++) {
            cout << "Digite nome, primeira e segunda nota do " << (i+1) << "o aluno: " << endl;
            cin.ignore(INT_MAX, '\n');
            getline(cin,nome[i]);
            cin >> ab1[i] >> ab2[i];
            cout << endl;
    }

    cout << fixed << setprecision(2);
    cout << endl;
    cout << "Alunos aprovados:" << endl;
    for (i=0; i<n; i++) {
            media_notas = (ab1[i] + ab2[i])/2;
            if (media_notas>=6) {
                cout << "Aluno(a): " << nome[i] << " Media: " << media_notas << endl;
            }
    }

    return 0;
}
