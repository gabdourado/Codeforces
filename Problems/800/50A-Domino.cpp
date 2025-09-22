/*
    Nome: Gabriel Dourado

    Solução: A solução desse problema veio da seguinte forma: vou escolher colocar os dominós 2 x 1, sempre que 
    possível, em pé, ou seja, a parte mais comprida na vertical. 
    
    Dado que N é a altura e M o comprimento do retângulo, se N é par, então a quantidade de dominós será dada por
    (N/2 * M), pois adiciono N/2 dominós (em pé) M vezes. 
    
    Se N for ímpar, então eu adiciono meus (N/2 * M), como fiz antes. Porém, isso fará sobrar uma linha, onde posso
    colocar (M/2) dominós deitados, adicionando assim (N/2 * M) + (M / 2) dominós.

    Dessa forma, consigo preencher o retânculo com dominós de dimensão 2 x 1.

*/

#include <bits/stdc++.h>

using namespace std;

int main (void) {

    int M, N, number_of_dominoes;

    cin >> M >> N;

    if (N % 2 == 0) 
        number_of_dominoes = ((N / 2) * M);
    else
        number_of_dominoes = ((N / 2) * M) + (M / 2);

    cout << number_of_dominoes << endl;

    return 0;
}