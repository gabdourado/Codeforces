#include <iostream>

using namespace std;

int main (void) {

    int K, N, W, totally(0), borrow;

    cin >> K >> N >> W;

    for(int i = 1; i <= W; i++)
        totally += i*K;

    borrow = totally - N;

    if (borrow < 0) borrow = 0;

    cout << borrow << endl;

    return 0;
}