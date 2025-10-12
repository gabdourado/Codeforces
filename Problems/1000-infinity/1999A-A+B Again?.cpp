/*
    Nome: Gabriel Dourado

    Solução: Nessa questão, dado que o inteiro recebido é 10 <= n <= 99, sempre terá dois dígitos.
    Para pegar o primeiro dígito, basta pegar a parte inteira da divisão por 10. Já para pegar o 
    segundo dígito, basta calcular o resto na divisão por 10. 

*/

#include <bits/stdc++.h>

using namespace std;

int main (void) {
    
    int t, n;

    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> n;

        int sum = (n / 10) + (n % 10);

        cout << sum << endl;
    }

    return 0;
}