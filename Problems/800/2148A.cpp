#include <bits/stdc++.h>

using namespace std;

int main (void) {
    
    int T, N, X, sum;

    cin >> T;

    for (int i = 0; i < T; i++) {
        cin >> X >> N;

        sum = N % 2 == 0 ? 0 : X;

        cout << sum << endl;
    }

    return 0;
}