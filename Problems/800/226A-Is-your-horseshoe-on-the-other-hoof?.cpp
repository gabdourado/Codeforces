/*
    Nome: Gabriel Dourado

    Solução: Dado que todas as ferraduras devem ser diferentes, basta ver quantas derraduras diferentes
    Valera já tem e comprar as restantes. Um set é perfeito para isso, pois ele é um conjunto de dados
    que não armazena itens repetidos.

    Após contarmos a quantidade de ferraduras diferentes que o cavalo tem, basta subtrair de 4 essa
    quantidade e teremos a quantidade mínima que deve ser comprada.


*/

#include <bits/stdc++.h>

using namespace std;

int main (void) {

    int s, minimum;
    set<int>horseshoes;

    for (int i = 0; i < 4; i++) {
        cin >> s;
        horseshoes.insert(s);
    }

    minimum = 4 - horseshoes.size();

    cout << minimum << endl;

    return 0;
}