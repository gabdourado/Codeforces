/*
    Nome: Gabriel Dourado

    Solução: 

    Entrada:         Entrada:                     Entrada:
    1                2                            3

    Saida:           Saída:                       Saída:
    I hate it        I hate that I love it        I hate that I love that I hate it

    Pode-se notar, que para um "estágio" ímpar será "hate", para um par, será "love", entre cada 
    estado usamos "that" e ao final "it". Vamos codificar isso.

*/

#include <bits/stdc++.h>

using namespace std;

int main (void) {

    int N;
    string feeling, hate, love;

    hate = "I hate ";
    love = "I love ";

    cin >> N;

    for (int i = 1; i <= N; i++) {
        if (i % 2 != 0) feeling += hate;
        else feeling += love;

        if (i < N) feeling += "that ";
    }

    feeling += "it";

    cout << feeling <<endl;

    return 0;
}