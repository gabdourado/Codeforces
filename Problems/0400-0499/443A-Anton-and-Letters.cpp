/*
    Nome: Gabriel Dourado

    Solução: Lá vai a solução do vovô. Por mais que provavelmente tenha um modo mais interessante de se fazer,
    vamos optar pela solução preguiçosa aqui. Vamos separar somente as letras em um set e contar o seu tamanho.
    Usando a estrutura set, de fato vamos ter um conjunto de letras onde não há repetição, conseguindo então 
    contar as letras distintas.

*/

#include <bits/stdc++.h>

using namespace std;

int main (void) {

    string s;
    set<char> letters;
    
    getline(cin, s);

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == ',' || s[i] == ' ' || s[i] == '{' || s[i] == '}') continue;
        letters.insert(s[i]);
    }

    cout << letters.size() << endl;

    return 0;
}