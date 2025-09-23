/*
    Nome: Gabriel Dourado

    Solução: Dados dois números binários, queremos que o i-ésimo dígito  na nossa saída seja 1, se e somente se, 
    o i-ésimo dígito em ambos os binários for diferente e 0 se forem iguais. Isso consiste em um XOR bit-a-bit,
    Observe o caso base número 1:

    Entrada:

    1 0 1 0 1 0 0
    0 1 0 0 1 0 1
    -------------
    1 1 1 0 0 0 1

    Saída:

    1 1 1 0 0 0 1

    Vamos receber duas strings - não consegui pensar em um modo melhor de trabalhar com esses números, mas com toda
    certeza deev ter um caminho melhor - e para cada caracter (dígito) da posição i dos dois números, realizar um XOR.
     
*/

#include <bits/stdc++.h>

using namespace std;

int main (void) {

    string number1, number2, result;
    int digit;

    cin >> number1 >> number2;

    for (int i = 0; i < number1.size(); i++) {    
        
        digit = (number1[i] - '0') ^ (number2[i] - '0');

        result += (digit + '0');
    }

    cout << result << endl;

    return 0;
}