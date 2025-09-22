#include <bits/stdc++.h>

using namespace std;

int main (void) {

    int N, X(0);
    string s;

    cin >> N;

    for (int i = 0; i < N; i++){
        cin >> s;

        if (s == "++X" || s == "X++") {
            X++;
        } else if (s == "--X" || s == "X--") {
            X--;
        }
    }

    cout << X << endl;
    
    return 0;
}