#include <bits/stdc++.h>

using namespace std;

int main (void) {
    
    int T, N, M, X, Y;
    int value;
    
    cin >> T;
    
    for (int i = 0; i < T; i++) {

        cin >> N >> M >> X >> Y;

        for (int i = 0; i < N; i++) cin >> value;
        for (int i = 0; i < M; i++) cin >> value;
        
        cout << N + M << endl;
    }

    return 0;
}