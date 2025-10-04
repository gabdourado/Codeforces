/*
    Nome: Gabriel Dourado

    Solução: Éssa é simles. Basta verificar se rating está no intervalo e produzir a saída correta.

*/

#include <bits/stdc++.h>

using namespace std;

int main (void) {

    int t, rating;

    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> rating;
        if (rating <= 1399) cout << "Division 4";
        else if (rating <= 1599) cout << "Division 3";
        else if (rating <= 1899) cout << "Division 2";
        else cout << "Division 1";
        cout << endl;
    }

    return 0;
}