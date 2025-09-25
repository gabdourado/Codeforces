/*
    Nome: Gabriel Dourado

    Solução: Quando um time da casa precisa jogar com seu uniforme de convidado? Quando seu uniforme de casa
    é igual ao de convidado do time adversário. Assim vamos "listar" todos os embates possíveis N * (N - 1)
    e verificar aqueles onde, em um jogo em casa, ocorre essa semelhança. 

*/

#include <bits/stdc++.h>

using namespace std;

int main (void) {

    int N, count(0);
    vector<pair<int, int>> uniforms;

    cin >> N;

    for (int i = 0; i < N; i++) {
        int h, a;
        cin >> h >> a;
        uniforms.push_back({h, a});
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++)
            if (uniforms[i].first == uniforms[j].second) count++;
    }

    cout << count << endl;

    return 0;
}