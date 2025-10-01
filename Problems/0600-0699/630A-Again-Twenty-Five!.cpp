/*
    Nome: Gabriel Dourado

    Solução: Seria uma zoeira essa questão? É possível provar que para todo n maior ou igual que 2, 5^n termina 
    em 25. Queremos provar que 5^n ≡ 25 (mod 100). Segue a prova por Indução:

    Caso Base: Para n = 2, segue que:
    
    5^2 = 25 ≡ 25 (mod 100)
    
    Hipótese de Indução: Suponhamos que seja verdade para k, onde k é um inteiro entre 2 e n, logo segue que:

    5^k ≡ 25 (mod 100)

    Passo Indutivo: Queremos mostrar que a congruência é válida para (k+1), ou seja:
    
    5^(k + 1) ≡ 25 (mod 100)

    Ora,

    5^(k + 1) = 5^k * 5
              ≡ 25 * 5 (mod 100) (Hipótese)
              = 125
              ≡ 25 (mod 100)
    
    Logo, o Princípio da Indução Finita garante que a relação é válida para todo n maior ou igual que 2. ■

*/

#include<bits/stdc++.h>

using namespace std;

int main (void) {

    int n;

    cin >> n;
    cout << 25 << endl;

    return 0;
}