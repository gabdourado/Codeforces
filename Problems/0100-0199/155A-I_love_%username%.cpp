/*
    Nome: Gabriel Dourado

    Solução: Para esse problema o que nos importa é a menor pontuação (record mínimo) e a maior pontuação 
    (record máximo). Se em algum momento o programador quebrar algum desses recordes, contamos! Então vamos
    atribuir como maior e menor pontuação a primeira competição e seguir com o algoritmo para encontrar as
    novas maiores e menores pontuações e efetuar a contagem. 

*/

#include<bits/stdc++.h>

using namespace std;

int main (void) {

    int n, min, max, amazing(0), points;

    cin >> n;

    cin >> points;

    min = max = points;
    for (int i = 1; i < n; i++) {
        cin >> points;
        if (points < min) {
            min = points;
            amazing++;
        }

        if (points > max) {
            max = points;
            amazing++;
        }
    }

    cout << amazing << endl;

    return 0;
}