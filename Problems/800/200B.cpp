/*
    Nome: Gabriel Dourado

    Solução: Como queremos calcular o percentual resultante de suco de laranja, precisamos relacionar a soma 
    dos percentuais de cada suco, ou seja, os Pi's com o volume total resultante, assim, P_total pode ser dado
    por:

    P_total = (P1 + P2 + P3 + ... + Pn) / (100 + 100 + 100 + ... + 100)
            = (P1 + P2 + P3 + ... + Pn) / 100*n
            = (P1 + P2 + P3 + ... + Pn) / n (Quero a resposta entre 0 e 100)

    Vamos calcular então P_total com a aproximação desejada.
*/

#include <bits/stdc++.h>

using namespace std;

int main (void) {

    int N;
    float P, P_total(0);

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> P;
        P_total += P;
    }

    P_total /= N;

    cout << P_total << endl;

    return 0;
}