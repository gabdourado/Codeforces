/*
    Nome: Gabriel Dourado

    Solução: A sacada dessa questão é perceber que escrever um número N como a soma de "round numbers",
    nada mais é do que escrever o número no sistema decimal. Por exemplo, o número 9876 pode ser escrito
    a soma de dígitos {0, 1, 2, 3, ..., 8, 9} multiplicados por uma potência de 10:

    9876 = 9 * 10^3 + 8 * 10^2 + 7 * 10^1 + 6 * 10^0
         = 9000 + 800 + 70 + 6

    Então vamos implementar um algoritmo que calcula cada termo e imprime na tela.

*/

#include <bits/stdc++.h>

using namespace std;

int main (void) {

    int t, n, k, d;   
    vector<int> summands;

    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> n;

        int exp(0);
        while(n >= 1) {
            d = n % 10;
            if (d != 0 ) summands.push_back(d * (int) pow(10, exp));
            n /= 10;
            exp++;
        }

        k = summands.size();
        cout << k << endl;
        for(int i = 0; i < k; i++) cout << summands[i] << " ";
        cout << endl;
        summands.clear();
    }

    return 0;
}