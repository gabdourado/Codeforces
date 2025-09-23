/*
    Nome: Gabriel Dourado

    Solução: O problema nos diz que o i-ésimo elemento, ou seja, p[i], deu presente para o amigo i.
    Como mostra o caso base abaixo:

    p = | 2 | 3 | 4 | 1 | -> Deu presente
        | 1 | 2 | 3 | 4 | -> Recebeu presente

    Queremos saber para quem i deu presente, então vamos construir um vetor p' com essa associação,
    criado do seguinte modo:

    p'[p[i]] = i

    Assim, a saída seria:

    p' = | 4 | 1 | 2 | 3 |
         | 1 | 2 | 3 | 4 |
         
*/

#include <bits/stdc++.h>

using namespace std;

int main (void) {

    int N, F;
    vector<int> P, P_new;

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> F;
        P.push_back(F);
        P_new.push_back(0);
    }

    for (int i = 0; i < N; i++) {
        P_new[P[i] - 1] = i;
    }

    for (int i = 0; i < N; i++) cout << P_new[i] + 1 << " ";
    cout << endl;

    return 0;
}