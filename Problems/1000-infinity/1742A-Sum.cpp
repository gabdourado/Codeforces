/*
    Nome: Gabriel Dourado

    Solução: Vamos a solução do vovô. Como sãao só 3 números, vamos só verificar as três somas possíveis e
    em seguida, imprimir a saída adequada. Fazendo isso para os t casos testes.

*/

#include <bits/stdc++.h>

using namespace std;

int main (void) {

    int t, a, b, c;
    string out;

    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> a >> b >> c;

        if (a + b == c || a + c == b || b + c == a) out = "YES";
        else out = "NO";

        cout << out << endl;
    }
    
    return 0;
}