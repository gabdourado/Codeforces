/*
    Nome: Gabriel Dourado

    Solução: Como queremos saber qual o mínimo de passos devemos dar para ir de a até b, vamos calcular a 
    diferença (em módulo) desses números e em seguida ir dividindo por 10, 9, 8, ... até 1, assim saberemos
    quantos dez "cabem" nessa distância, quantos noves, atc.

*/

#include<bits/stdc++.h>

using namespace std;

int main (void) {

    int t, a, b, dist;

    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> a >> b;

        if (a > b) dist = a - b;
        else dist = b - a;

        int moves(0);

        for (int i = 10; i > 0; i--) {
            if (dist == 0) break;
            moves += dist / i;
            dist %= i;
        }

        cout << moves << endl;
    }

    return 0;
}