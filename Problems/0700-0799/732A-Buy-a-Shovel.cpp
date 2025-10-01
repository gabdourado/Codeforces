/*
    Nome: Gabriel Dourado

    Solução: O que quemos saber é a quantidade q de pás que precisamos comprar para que ele possa pagar
    usando uma certa quantidade de notas de 10 e (ou não) sua moeda de valor r, sabendo que cada pá custa
    um valor k. 
    
    Sem usar a moeda de valor r, basta multiplicar k por valores até encontrar um número que deixe zero na
    divisão por 10. Usando a moeda r, basta subtrar o valor da multiplicação por r e fazer a mesma verificação 
    na divisão por 10.

*/

#include <bits/stdc++.h>

using namespace std;

int main (void) {

    int k, r, q(1);

    cin >> k >> r;

    while((k * q) % 10 != 0 && (k * q - r) % 10 != 0) q++;

    cout << q << endl;

    return 0;
}