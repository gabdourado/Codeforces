/*
    Nome: Gabriel Dourado

    Solução: Um número quase da sorte é um número que tem 4 dígitos 7 e/ou 4 na sua formação ou um número que
    tem 7 dígitos 4 e/ou 7 na sua formação. Exemplo de números quase da sorte: 77144, 770077, 74847774.

    Assim, vamos contar quantos 4's e 7's aparecem nos números e verificar se essa quantidade é igual a 4
    ou se é igual a 7, mostrando assim a a saída esperada.

*/

#include <bits/stdc++.h>

using namespace std;

int main (void) {

    string number;
    int count(0);

    cin >> number;

    for (int i = 0; i < number.size(); i++)
        if (number[i] == '4' || number[i] == '7') count++;

    if (count == 4 || count == 7) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}