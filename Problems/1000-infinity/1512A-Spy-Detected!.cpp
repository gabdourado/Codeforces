/*
    Nome: Gabriel Dourado

    Solução: Na correria, mas saiu! 
    
    Nessa questão vamos usar duas variáveis inteiras num1 e num2 para guardar o valor dos dois 
    números que estão no array. E dois pair, p1 e p2, onde o first de cada pair será um contador 
    de ocorrências, e o second de cada pair irá armazenar o índice da última ocorrência.

    Desse modo, se o p1.first for 1, significa que se ocorreu uma vez, então mostramos o índice.
    Se não, p2.first sertamente é 1 pela condição do problema, então mostramos o índice.

*/

#include <bits/stdc++.h>

using namespace std;

int main (void) {

    int t, n, a;

    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> n;
        vector <int> v;
        for (int i = 0; i < n; i++) {
            cin >> a;
            v.push_back(a);
        }


        int num1, num2;
        pair <int, int> p1 = {0,0}, p2 = {0,0};

        num1 = v[0];

        for (int i = 0; i < n; i++) {
            if (v[i] != num1) {
                num2 = v[i];
                p1.first++;
                p1.second = i + 1;
            } else {
                p2.first++;
                p2.second = i + 1;
            }
        }

        if (p1.first == 1) cout << p1.second << endl;
        else cout << p2.second << endl;

    }

    return 0;
}