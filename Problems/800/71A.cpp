/*
    Nome: Gabriel Dourado

    Solução: Essa é relativamente simples. Para cada caso teste, vamos primeiro ver se o tamanho da string supera
    10 caracteres. Se sim, ela é escrita no formato mostrado: primeiro dígito + (tamanho - 2) + último dígito.
    Caso não supere, a palavra permanece sem alteração.

*/

#include <bits/stdc++.h>

using namespace std;

int main (void) {
    
    int N, length;
    string S, new_S;

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> S;

        length = S.size();
        if (length > 10) 
            new_S = S[0] + to_string(length - 2) + S[length - 1];
        else
            new_S = S;
        
        cout << new_S << endl;
    }

    return 0;
}