/*
    Nome: Gabriel Dourado

    Solução: Nesse problema, temos as seguintes restrições: a, b, n são inteiros positivos e a > b. A equação 
    a + b = n, na teoria dos números, é chamada de equação diofantina, onde nesse caso os coeficientes de a e b
    são iguais a 1. Para encontrar o número de soluções, levando em conta as restrições dadas, vamos observar 
    dois casos:

    Entrada:                           Entrada:
    7                                  8

    Processo:                          Processo
    a + b = 7                          a + b = 8
    6   1 -> OK                        7   1 -> OK 
    5   2 -> OK                        6   2 -> OK
    4   3 -> OK                        5   3 -> OK
    3   4 -> Começou a repetir         4   4 -> Não pode, pois a restrição é (a > b)
    2   5                              3   5 -> Começou a repetir
   ... ...                            ... ...
   
   Saída:                             Saída:
   3                                  3

   Observe que se n é impar, o quantidade de soluções é a parte inteira de n/2. Já se n é par, a quantidade
   de soluções é    (n/2 - 1).  

*/

#include <bits/stdc++.h>

using namespace std;

int main (void) {

    int t, n, solutions;
    
    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> n;

        if (n % 2 == 0) solutions = n/2 - 1;
        else solutions = n/2;
        
        cout << solutions << endl;
    }

    return 0;
}