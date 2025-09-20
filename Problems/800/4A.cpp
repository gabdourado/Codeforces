/*
    Nome: Gabriel Dourado

    Solução: Esse problema é ralativamente fácil. Dado que W é um número inteiro positivo, só sendo um número 
    par para poder ser escrito como a soma de dois outros números pares. É evidente que por se tratar de uma 
    melancia, não podemos ter uma parcela valendo zero nessa soma. Isso ocorre quando W = 2, pois em tese a 
    soma seria 0 + 2, o que não é permitido. 
    
    Assim, é possível divir a melancia sempre que W for par e diferente de 2.

*/

#include <bits/stdc++.h>

using namespace std;

int main (void) {
    
    int W;

    cin >> W;

    if (W % 2 == 0 && W != 2) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}