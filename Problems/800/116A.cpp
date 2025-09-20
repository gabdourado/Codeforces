/*
    Solução: É evidente que a capacidada mínima necessária pode ser calculada observando o número 
    total de pessoas que permanece no trem após cada parada. Por exemplo, para o caso base:

      n  | Out | In  |   Nº de pessoas 
      1  |  0  |  3  | -> 0 - 0 + 3 = 3 
      2  |  2  |  5  | -> 3 - 2 + 5 = 6
      3  |  4  |  2  | -> 6 - 4 + 2 = 4
      4  |  4  |  0  | -> 4 - 4 + 0 = 0

    A capacidade mínima do trem será a maior quantidade de pessoas que permaneceram no ônibos após
    alguma parada, logo, 6 pessoas é a capacidade mínima desse trem. 
*/

#include <bits/stdc++.h>

using namespace std;

int main (void) {

    int N, in, out, max(0), persons(0);

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> out >> in;
        persons += (in - out);

        if (persons > max) max = persons;
    }

    cout << max << endl;

    return 0;
}