/*
    Nome: Gabriel Dourado

    Solução: O que importa para nós são os problemas onde a soma dos seus status é maior que 1, ou seja, onde
    ao menos duas pessoas sabem a solução. Dessa forma, em cada linha vamos somar esses valores e verificar se
    é maior que 1, caso sim, esse problema é contado. Ao final, teremos quantos problemas elas sabem resolver.

*/

#include <bits/stdc++.h>

using namespace std;

int main (void) {
    
   int N, status, count(0);

   cin >> N;

    for (int i = 0; i < N; i++) {
        int sum (0);
        for (int j = 0; j < 3; j++) {
            cin >> status;
            sum += status;
        }
        if (sum > 1) count++;
    }

    cout << count << endl;

    return 0;
}