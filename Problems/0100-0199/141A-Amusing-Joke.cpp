/*
    Nome: Gabriel Dourado

    Solução: Dadas três strings: c, n e p, primeiro verificamos se a soma dos tamanhos de c e n é diferente
    do tamanho de p, se sim, então p não pode ser uma permutação das letras de c e n. 
    
    Se os tamanhos forem iguais, vamos usar dois arrays de tamanho 26, um para guardar a quantidada de cada
    uma das letras de c e n e outro para a string p. Em seguida, vamos verificar se alguma posição dos dois
    arrays é diferente, se sim, então p não é uma permutação das letras de c e n.

    Dessa forma, mostramos a saída desejada.

*/

#include <bits/stdc++.h>

using namespace std;

int main (void) {

    string c, n, p, out("YES");
    int cn_letters[26], p_letters[26];

    cin >> c >> n >>  p;

    if ((c.size() + n.size())  != p.size()) out = "NO";
    else {
        for (int i = 0; i < 26; i++) cn_letters[i] = p_letters[i] = 0;

        for (int i = 0; i < c.size(); i++) cn_letters[c[i] % 65]++;
        for (int i = 0; i < n.size(); i++) cn_letters[n[i] % 65]++;
        for (int i = 0; i < p.size(); i++) p_letters[p[i] % 65]++;

        for (int i = 0; i < 26; i++) {
            if (cn_letters[i] != p_letters[i]) {
                out = "NO";
                break;
            }
        }
    }

    cout << out << endl;

    return 0;
}