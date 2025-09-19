#include <bits/stdc++.h>

using namespace std;

int main (void) {
    
   int N, status, count(0);

   cin >> N;

    for (int i = 0; i < N; i++) {
        int sum (0);
        for (int j = 0; j < 3; j++) {
            cin >> status;
            sum += status;
        }
        if (sum > 1) count++;
    }

    cout << count << endl;

    return 0;
}