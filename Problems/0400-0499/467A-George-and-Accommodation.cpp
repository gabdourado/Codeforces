/*
    Nome: Gabriel Dourado

    Solução: Queremos saber quantos quartos conseguem abrigar 2 pessoas dado que cada um dos N quartos tem 
    P pessoas dentro e Q capacidade total. Bem, vamos percorrer cada um dos N quartos e saber se a diferença
    (Q - P) é maior ou igual que 2, se sim, George e Alex podem ficar naquele quarto, então o adicionamos na 
    contagem. Observe o caso base:

   | P | Q | Podem ficar |
   | 1 | 1 |     não     |
   | 2 | 2 |     não     |
   | 3 | 3 |     não     |

   Logo, a quantidade de quartos é 0.

*/

#include <bits/stdc++.h>

using namespace std;

int main (void) {

    int N, P, Q, count(0);

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> P >> Q;
        if (Q - P >= 2) count++;
    }

    cout << count << endl;

    return 0;
}