#include <bits/stdc++.h>

using namespace std;

int main (void) {

    string S, T;
    bool reversely (true);

    cin >> S >> T;

    if (S.size() != T.size()) reversely = false;
    else {
        for (int i = 0; i < S.size(); i++) {
            if (S[i] != T[S.size() - i - 1]) {
                reversely = false;
                break;
            }
        }
    }

    if (reversely) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}