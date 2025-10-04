/*
    Nome: Gabriel Dourado

    Solução: Dados 4 inteiros distintos a, b, c, d. Para esse problema queremos calcular quantos dos 
    inteiros b, c e d são maiores que a. Vamos implementar isso!

*/

#include <bits/stdc++.h>

using namespace std;

int main (void) {

    int t, a, b, c, d;

    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> a >> b >> c >> d;
        
        int count(0);
        
        if (b > a) count++;
        if (c > a) count++;
        if (d > a) count++;

        cout << count << endl;
    }

    return 0;
}