/*
    Nome: Gabriel Dourado

    Solução: Essa soma pode ter 10^15 termos, o que levaria muito tempo, podendo causar TLE. Vamos pensar em
    uma abordagem que economize tempo. A função f(N) está definida como:
    
    f(N) = - 1 + 2 - 3 + 4 - 5 + 6 ... + N(-1)^N

    Ou seja, termos pares tem sinal positivo e termos ímpares tem sinal negativo. Vamos analisar o que ocorre 
    para N par e N ímpar:

    - Se N ímpar, a soma termina com -N e as parcelas podem ser arrumadas de forma:

    f(N) = (-1 + 2) + (-3 + 4) + (-5 + 6) + ... - N
         = 1 + 1 + 1 + ... - N
         = (N - 1)/2 - N
         = -(N + 1)/2

    - Se N par, a soma termina com N e as parcelas podem ser arrumadas de forma:

    f(N) = (-1 + 2) + (-3 + 4) + (-5 + 6) + ... (-(N-1) + N)
         = 1 + 1 + 1 + ... + 1
         = N/2

    Logo, vamos usar essas duas fórmulas para facilitar o cálculo.

*/

#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main (void) {

    ll int N, value;

    cin >> N;

    if (N % 2 != 0) value = -(N + 1)/2;
    else value = N/2;

    cout << value << endl;

    return 0;
}