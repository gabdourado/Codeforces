#include <bits/stdc++.h>

using namespace std;

int main (void) {
    
    int A, B, count(0);

    cin >> A >> B;

    while (A <= B) {
        count++;
        A *= 3;
        B *= 2;
    }

    cout << count << endl;

    return 0;
}