/*
    Nome: Gabriel Dourado

    Solução: Vamos somar o lado esquerdo da string e o lado direito e verificar se são iguais. Como cada dígito tem
    um valor na tabela ASCII, então a soma deve dar igual, não sendo preciso converter para inteiro e fazer a soma.
    Ao final, produzimos a saída correspondente.

*/

#include <bits/stdc++.h>

using namespace std;

int main (void) {

    int t;
    string s;

    cin >>  t;

    for (int i = 0; i < t; i++) {

        cin >> s;
        
        int sumL(0), sumR(0);

        for (int i = 0; i < 6; i++) {
            if (i < 3) sumL += s[i];
            else  sumR += s[i];
        }

        if (sumL == sumR) cout << "YES" << endl;
        else cout << "NO" << endl;

    }

    return 0;
}