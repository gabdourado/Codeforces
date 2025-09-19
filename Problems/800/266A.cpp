#include <bits/stdc++.h>

using namespace std;

int main (void) {

    int N, count(0);
    string S;
    vector<char> collors;

    cin >> N >> S;

    collors.push_back(S[0]);

    for(int i = 1; i < N; i++)
        if (S[i] != collors.back())
            collors.push_back(S[i]);
        else 
            count++;

    cout << count << endl;

    return 0;
}