#include <bits/stdc++.h>

using namespace std;

int main (void) {

    int N, count_A(0), count_D(0);
    string games;
    
    cin >> N >> games;

    for (int i = 0; i < N; i++) {
        if (games[i] == 'A') count_A++;
        else count_D++;
    }

    if (count_A > count_D) cout << "Anton" << endl;
    else if (count_A < count_D) cout << "Danik" << endl;
    else cout << "Friendship" << endl;
    return 0;
}