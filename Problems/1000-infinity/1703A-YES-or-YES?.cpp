/*
    Nome: Gabriel Dourado

    Solução: Nesse problema basta converter a entrada para minúsculo e em seguida verificar se a string 
    é "yes" e imprimir a saída correspondente.

*/

#include <bits/stdc++.h>

using namespace std;

int main (void) {

    int t;
    string s, out;

    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> s;
        for (int i = 0; i < s.size(); i++) if (s[i] >= 'A' && s[i] <= 'Z') s[i] += 32;
        
        if (s == "yes") out = "YES";
        else out = "NO";

        cout << out << endl;
    }

    return 0;
}