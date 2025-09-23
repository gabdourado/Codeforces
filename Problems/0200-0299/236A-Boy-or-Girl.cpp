/*
    Nome: Gabriel Dourado

    Solução: Dada uma string S, queremos saber a quantidade de caracteres distintos de S. Se esse número for 
    par, então é uma mulher, caso contrário, é um homem. Observe o caso base:

    S = | w | j | m | z | b | m | r |

    As letras distintas são: {w, j, m, z, b, r}. Como o problema é de identificar o número de objetos distintos,
    vamos usar um set para guardar os elementos e ao final, contar a quantidade de elementos, e verirficando se
    é par ou ímpar, mostrar a saída esperada.

*/

#include <bits/stdc++.h>

using namespace std;

int main (void) {

    string user;
    set<char> letters;

    cin >> user;

    for (int i = 0; i < user.size(); i++) letters.insert(user[i]);

    if (letters.size() % 2 == 0) cout << "CHAT WITH HER!" << endl;
    else cout << "IGNORE HIM!" << endl;
    
    return 0;
}