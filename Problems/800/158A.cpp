#include <bits/stdc++.h>

using namespace std;

int main (void) {

    int N, K, number, count(0);
    vector<int> scores;

    cin >> N >> K;

    for (int i = 0; i < N; i++) {
        cin >> number;
        scores.push_back(number);
    }

    for (int i = 0; i < N; i++) if (scores[i] >= scores[K-1] && scores[i] > 0) count++;

    cout << count << endl;

    return 0;
}