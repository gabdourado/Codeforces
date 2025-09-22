/*
    Nome: Gabriel Dourado

    Solução:

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