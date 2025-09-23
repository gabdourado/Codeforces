#include <bits/stdc++.h>

using namespace std;

int main (void) {

    int N, H, heigth, width(0);

    cin >> N >> H;

    for (int i = 0; i < N; i++) {
        cin >> heigth;
        if (heigth > H) width++;
    }

    width += N;

    cout << width << endl;

    return 0;
}