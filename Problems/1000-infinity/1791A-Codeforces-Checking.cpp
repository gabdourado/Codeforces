/*
    Nome: Gabriel Dourado

    Solução: Para cada caractere, vamos verificar se eles está em alguma posição da string "codeforces".

*/

#include <bits/stdc++.h>

using namespace std;

int main (void) {

    int t;
    string s = "codeforces";

    cin >> t;

    for (int i = 0; i < t; i++) {
        char c;

        cin >> c;

        if (s.find(c) != -1) cout << "YES" << endl;
        else cout << "NO" << endl;

    }
    return 0;
}