/*
    Nome: Gabriel Dourado

    Solução: Se o resto da divisão de A por B for zero, então não é preciso nenhum movimento, mas se não for, 
    a quantidade de movimentos será B menos o resto da divisão de A por B, ou seja, quantos movimentos eu
    tenho que fazer para que A chegue até o próximo múltilo de B. 

*/

#include <bits/stdc++.h>

using namespace std;

int main (void) {

    int T, A, B;

    cin >> T;

    for (int i = 0; i < T; i++) {
        cin >> A >> B;
        int moves;

        if (A % B == 0) moves = 0;
        else moves = B - (A % B);

        cout << moves << endl;
    }

    return 0;
}