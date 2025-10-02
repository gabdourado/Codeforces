/*
    Nome: Gabriel Dourado

    Solução: A única estratégia que pensei para resolução dessa questão, é pensar nisso como um sistema 
    de equações. Como a ordem é arbitrária, mas preciso que a, b e c sejam positiovs, pensei em ordenar 
    os valores do vetor x. Logo a matriz aumentada ficaria no seguinte formato: 
    
    
    1 1 0 | 3 | x[0] -> a + b
    1 0 1 | 4 | x[1] -> a + c
    0 1 1 | 5 | x[2] -> b + c 
    1 1 1 | 6 | x[3] -> a + b + c

    E para determianr os termos podemos fazer operações com as linhas de modo que:

    c = x[3] - x[0]
    b = x[2] - x[3] + x[0]
    a = x[3] - x[2]

    O único porém é que (x[2] + x[0]) deve sempre ser maior ou igual a x[3]. Mas vamos implementar isso 
    (e torcer). Deu certo!
*/

#include <bits/stdc++.h>

using namespace std;

int main (void) {

    int a, b, c, var;
    vector<int> x;

    for (int i = 0; i < 4; i++) {
        cin >> var;
        x.push_back(var);
    }
    
    sort(x.begin(), x.end());

    c = x[3] - x[0];
    b = x[2] - x[3] + x[0];
    a = x[3] - x[2];

    cout << a << " " << b << " " << c << endl;

    return 0;
}