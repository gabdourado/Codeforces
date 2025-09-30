/*
    Nome: Gabriel Dourado

    Solução: Vamos compreender o que cada variável representa para o problema, assim fica mais fácil de pensar
    em uma solução simples. Sejam as variáveis:

    n := Quantidade de amigos
    k := Quantidade de garrafas
    l := Quantidade de mililitros de cada garrafa
    c := Quantidade de limas
    d := Quantidade de fatias de cada lima
    p := Quantidade de sal
    nl := Quantidade de mililitros de cada drink
    np := Quantidade de sal de cada fatia

    Para calcular quantos drinks posso fazer, basta fazer:

    (k * l) / nl

    Para calcular quantas fatias de lima temos disponíveis, basta fazer:

    (c * d)

    Para cacularmos a quantidade de "pitadas" de sal disponíveis, basta fazer:

    p / np

    Calculado essas componentes de cada brinde, para saber quantos se pode fazer, basta determinar o
    mínimo entre essas componestes e fazer esse valor dividido por n, pois essa será a quantidade de
    brindes que poderão ser feitos.

*/

#include <bits/stdc++.h>

using namespace std;

int min(int a, int b, int c) {
    int min;
    min = a < b ? a : b;
    min = min < c ? min : c;
    return min;
}

int main (void) {

    int n, k, l, c, d, p, nl, np;
    int toasts, drink, limes, salt;

    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    drink = (k * l) / nl;
    limes = (c * d);
    salt = p / np;
    
    toasts = min(drink, limes, salt) / n;

    cout << toasts << endl;

    return 0;
}