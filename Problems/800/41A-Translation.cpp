/*
    Nome: Gabriel Dourado

    Solução: O clássico problema de verificar se dada uma string S, T é a sua inversão. Primeiro verificamos
    os tamanhos das duas strings S e T, se são diferentes, T já não pode ser a inversa de S. Caso os tamanhos
    forem iguais, partimos para a comparação. Para o caso base número 1:

    S = | c | o | d | e |
        | 0 | 1 | 2 | 3 |

    T = | e | d | o | c |
        | 0 | 1 | 2 | 3 |

    Verificamos se a posição S[0] é igual a T[3], T[1] é igual a S[2], ... S[i] é igual a T[size - i - 1], onde
    size é o tamanhos strings. Se em algum momento houver diferença, T não é a string inversa de S.

*/

#include <bits/stdc++.h>

using namespace std;

int main (void) {

    string S, T;
    bool reversely (true);

    cin >> S >> T;

    if (S.size() != T.size()) reversely = false;
    else {
        for (int i = 0; i < S.size(); i++) {
            if (S[i] != T[S.size() - i - 1]) {
                reversely = false;
                break;
            }
        }
    }

    if (reversely) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}