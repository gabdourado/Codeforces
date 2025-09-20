/*
    Nome: Gabriel Dourado

    Solução: Essa é fácil. Vamos começar com uma variável de controle, que indica se o problema é difícil,
    como sendo false. Na primeira ocorrência de 1, mudamos seu valor para true. E após o loop, mostramos a
    saída correspondente.

*/

#include <bits/stdc++.h>

using namespace std;

int main (void) {

    int N, opinion;
    bool hard(false);

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> opinion;
        if (opinion == 1) hard = true;
    }

    if (hard) cout << "HARD" << endl;
    else cout << "EASY" << endl;

    return 0;
}