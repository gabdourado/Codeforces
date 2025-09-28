/*
    Nome: gabriel Dourado

    Solução: Dados três pontos distintos, p1, p2 e p3, ordenados, observe eles na reta:

    |------|-----------------|
    p1     p1                p3

    Para sabermos a distância mínima, basta saber a distância entre p1 e p3, onde p1 é o mais a esquerda
    da reta (mínimo) e p3 o mais a direita (máximo). E é isso que vamos fazer!

*/
#include<bits/stdc++.h>

using namespace std;

int main (void) {

    int d;
    vector<int> friends;

    for (int i = 0; i < 3; i++) {
        int point;
        cin >> point;
        friends.push_back(point);
    }

    int min = *min_element(friends.begin(), friends.end());
    int max = *max_element(friends.begin(), friends.end());

    d = max - min; 

    cout << d << endl;

    return 0;
}