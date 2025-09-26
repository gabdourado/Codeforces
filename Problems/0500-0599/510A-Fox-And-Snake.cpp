/*
    Nome: Gabriel Dourado

    Solução: Para esse problema, vamos analisar o seguinte, se é uma linha par, será composta por m "#",
    já se é uma linha impar, poderá ser composta por (m - 1) "." e uma "#" ou o a mesma quantida, porém 
    na ordem inversa. Para cuidar dessa inversão, vamos criar uma variável para sabermos se o "vazio"
    será a direita ou a esquerda. 
    
    Observe o caso base 1:

    Entrada (n, m):
    5 3

    Processo:
    ### -> Linha 0
    ..# -> Linha 1 (vazio a esquerda)
    ### -> Linha 2
    #.. -> Linha 3 (vazio a direita)
    ### -> Linha 4 

    Saída:
    ###
    ..#
    ###
    #..
    ###
    
    Agora é só implementar esse algoritmo.

*/

#include <bits/stdc++.h>

using namespace std;

int main (void) {

    int N, M;
    bool right(false);

    cin >> N >> M;

    for (int i = 0; i < N; i++) {

        if (i % 2 != 0) {
            if (right) {
                cout << "#";
                for (int j = 0; j < M - 1; j++) cout << ".";
                cout << endl;
                right = false;
            } else {
                for (int j = 0; j < M - 1; j++) cout << ".";
                cout << "#" << endl;
                right = true;
            }
        } else {
            for (int i = 0; i < M; i++) cout << "#";
            cout << endl;
        }

    }

    return 0;
}