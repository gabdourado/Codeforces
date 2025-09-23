/*
    Nome: Gabriel Dourado

    Solução: Como queremos saber se ambos os jogadores, cooperando, venceram os 4 jogos, podemos guardar os jogos de 
    X e Y em conjuntos e calcular a união. Se a quantidade de elementos for igual a quantidade N de fases, então eles
    conseguiram, caso não, não conseguiram.

*/

#include <bits/stdc++.h>

using namespace std;

int main (void) {

    int N, P, Q;
    set<int> P_levels, Q_levels, every_levels;
    
    cin >> N;

    cin >> P;
    for (int i = 0; i < P; i++) {
        int level;
        cin >> level;
        P_levels.insert(level);
    }

    cin >> Q;
    for (int i = 0; i < Q; i++) {
        int level;
        cin >> level;
        Q_levels.insert(level);
    }

    set_union(P_levels.begin(), P_levels.end(), Q_levels.begin(), Q_levels.end(), inserter(every_levels, every_levels.begin()));

    if (every_levels.size() == N) cout << "I become the guy." << endl;
    else cout << "Oh, my keyboard!" << endl;

    return 0;
}