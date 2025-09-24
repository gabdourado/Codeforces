/*
    Nome: Gabriel Dourado

    Solução: Precisamos deixar o soldado de maior altura na posição inicial e o de menor altura na posição
    final dessa fila. Vamos analisar alguns exemplos e perceber algumas coisas interessantes sobre esse
    problema.

    Entrada 1:

    33 44 11 22

    Processo 1:
    1. 44 33 11 22 (44 troca com 33) 
    2. 44 33 22 11 (22 troca com 11)

    Saída 1:

    2

    Entrada 2:

    10 10 58 31 63 40 76

    Processo 2:
    1. 10 58 10 31 63 40 76 (10 trocou com 58)
    2. 10 58 10 31 63 76 40 (40 trocou com 76)
    3. 10 58 10 31 76 63 40 (63 trocou com 76)
    4. 10 58 10 76 31 63 40 (31 trocou com 76)
    5. 10 58 76 10 31 63 40 (10 trocou com 76)*
    6. 10 76 58 10 31 63 40 (58 trocou com 76)
    7. 76 10 58 10 31 63 40 (10 trocou com 76)
    8. 76 10 58 31 10 63 40 (10 trocou com 31)
    9. 76 10 58 31 63 10 40 (10 trocou com 63)
    10. 6 10 58 31 63 40 10 (10 trocou com 40)

    Saída 2:
    10

    No caso 1, não ocorre um cruzamento entre os soldados, ou seja, no momento das trocas, o soldado maior,
    não ultrapassa o menor. Pois eles já estão nos seus "lados relativos". 
    
    Já no caso 2, ambos estão nos "lados relativos opostos", e no momento das trocas, em algum momento o 
    maior troca de lugar com o menor, como é notado no movimento 5 do processo 2, destacado com *, isso 
    evita uma troca a mais, então devemos tirar esse movimento a menos.

    Algo que é interessante falar é que sempre queremos pegar o a altura mínima mais a direita e a altura 
    máxima mais a esquerda, então isso reflete no nosso algoritmo de encontrar o maior e o menor elementos.

*/

#include <bits/stdc++.h>

using namespace std;

pair<int, int> min(vector<int> v) {
    int _min = v[0];
    int idx_min = 0;
    for (int i = 0; i < v.size(); i++) {
        if (v[i] <= _min) {
            _min = v[i];
            idx_min = i;
        }
    }
    pair<int, int> out = {_min, idx_min};
    return out;
}

pair<int, int> max(vector<int> v) {
    int _max = v[0];
    int idx_max = 0;
    for (int i = 0; i < v.size(); i++) {
        if (v[i] > _max) {
            _max = v[i];
            idx_max = i;
        }
    }
    pair<int, int> out = {_max, idx_max};
    return out;
}

int main (void) {

    int N, soldier;
    vector<int> soldiers;

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> soldier;
        soldiers.push_back(soldier);
    }

    pair <int, int> _max, _min;

    _min = min(soldiers);
    _max = max(soldiers);

    int moves = (_max.second) + (N - 1 - _min.second);

    if (_max.second > _min.second) moves--;

    cout << moves << endl;

    return 0;
}