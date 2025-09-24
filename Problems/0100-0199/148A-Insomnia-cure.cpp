/*
    Nome: Gabriel Dourado

    Solução: Nesse problema temos d dragões, todos os múltiplos de k foram atacados com uma frigideira,
    todos os múltiplos de l tiveram seu rabo esmagado pela porta, etc. Assim, vamos calcular quantos dos
    d drações (1, 2, 3, ..., d) sofreram danos físicos e psicológicos (lol). 
    
    Para isso, basta calcular verificar se dado um valor entre 1 e d, ele é múltiplo de k, l, m ou n.

*/

#include <bits/stdc++.h>

using namespace std;

int main (void) {

    int k, l, m, n, d;
    int dragons(0);

    cin >> k >> l >> m >> n >> d;

    for (int i = 1; i <= d; i++) if (i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0) dragons++;

    cout << dragons << endl;

    return 0;
}