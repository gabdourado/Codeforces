/*
    Nome: Gabriel Dourado

    Solução: Não tem erro, é só fazer exatamente o que a questão diz. Sem ânimo pra explicar hoje.

*/

#include<bits/stdc++.h>

using namespace std;

int main (void) {

    int t, a, b, c;

    cin >> t;

    for (int i = 0 ; i < t; i++) {
        cin >> a >> b >> c;

        if (a + b == c) cout << "+" << endl;
        else cout << "-" << endl;
    }

    return 0;
}