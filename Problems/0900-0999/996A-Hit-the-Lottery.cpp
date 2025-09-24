/*
    Nome: Gabriel Dourado

    Solução: Essa é uma questão simples de operações de divisão e resto. Basicamente eu calculo quantas
    notas de 100 vou usar (divisão por 100) e o que sobra (resto por 100) é o dineheiro que ainda será
    tirado usando notas de 20, 10, 5 e 1. 
    
    O processo é repetido para todas as notas.
     
*/

#include <bits/stdc++.h>

using namespace std;

int main (void) {

    int N, notes(0);

    cin >> N;

    notes += (N / 100);
    N %= 100;

    notes += (N / 20);
    N %= 20;

    notes += (N / 10);
    N %= 10;

    notes += (N / 5);
    N %= 5;

    notes += N;
    
    cout << notes << endl;

    return 0;
}