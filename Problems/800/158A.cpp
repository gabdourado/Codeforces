/*
    Nome: Gabriel Dourado

    Solução: Dada uma posição K, queremos contar todas as ocorrências não nulas onde scores[i] é maior ou igual
    que scores[K]. Como o problema nos dá inteiros nas posições 1 até N, e nosso vector de scores começa a contagem 
    do 0, nossa posição K na verdade será a posição (K-1) e em um loop, contamos todos os casos usando uma variável 
    de contagem. Observe o caso base:

    scores = | 10 | 9 | 8 | 7 | 7 | 7 | 5 | 5 |
             | 0  | 1 | 2 | 3 | 4 | 5 | 6 | 7 |
            
    Aqui K = 5, logo, queremos contar todos os casos maiores ou iguais que scores[4] (valor 7). 
    São eles: 10, 9, 8, 7, 7 e 7, ou seja, 6 valores. Portanto a saída é 6.

*/

#include <bits/stdc++.h>

using namespace std;

int main (void) {

    int N, K, number, count(0);
    vector<int> scores;

    cin >> N >> K;

    for (int i = 0; i < N; i++) {
        cin >> number;
        scores.push_back(number);
    }

    for (int i = 0; i < N; i++) if (scores[i] >= scores[K-1] && scores[i] > 0) count++;

    cout << count << endl;

    return 0;
}