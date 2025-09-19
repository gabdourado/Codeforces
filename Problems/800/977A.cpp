#include <bits/stdc++.h>

using namespace std;

int main (void) {

    int N, K;
    
    cin >> N >> K;

    for (int i = 0; i < K; i++) {
        if (N % 10 != 0) N--;
        else N /= 10;
    }

    cout << N << endl;

    return 0;
}
