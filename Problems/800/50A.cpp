#include <bits/stdc++.h>

using namespace std;

int main (void) {

    int M, N, number_of_dominoes;

    cin >> M >> N;

    if (N % 2 == 0) 
        number_of_dominoes = (M * N) / 2;
    else
        number_of_dominoes = (M * (N / 2)) + (M / 2);

    cout << number_of_dominoes << endl;

    return 0;
}