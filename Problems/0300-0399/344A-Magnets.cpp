/*
    Nome: Gabriel Dourado

    Solução: Queremos contar quantos grupos o cientista consegue formar dada a ordem dos imãs. Perceba que os
    imãs só podem se atrair se ele for do "mesmo tipo", ou seja, se for 10 ou 01. Pois um imã do tipo "plus-minus"
    pode ser colocado junto de outro "plus-minus":
    
    (+, -)(+, -)(+, -) -> 01 01 01

    E o mesmo vale para imãs do tipo "minus-plus":

    (-, +)(-, +) -> 10 10

    Então, vamos contar da quantas vezes na ordem de imãs mostrada, se muda o tipo, assim teremos a quantidade
    de grupos formados. 

*/

#include <bits/stdc++.h>

using namespace std;

int main (void) {

    int N, magnet, last_config(0), count(0);

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> magnet;

        if (magnet != last_config) {
            count++;
            last_config = magnet;
        }
    }

    cout << count << endl;

    return 0;
}