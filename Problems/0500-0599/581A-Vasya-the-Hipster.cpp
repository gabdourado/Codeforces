/*
    Nome: Gabriel Dourado

    Solução: Vamos pensar na quantidade de meias diferentes que ele tem. Imagine duas gavetas com uma 
    quantidade a de meias R (red) e b de meias B (blue). A quantidade de pares de meias diferentes vai 
    ser dada por: min(a, b). 
    
    Já a quantidade de pares com meias iguais vai ser dado por: (max(a,b) - min(a, b))/2.

    Observe esse exemplo com a = 5 e b = 3:

    |   R   |
    |   R   |
    |   R   |    |   B   |
    |   R   |    |   B   |
    |   R   |    |   B   |
    |_______|    |_______|

    Pares diferentes:
    min(5, 3) = 3

    Pares iguais:
    (max(5, 3) - min(5, 3))/2 = (5 - 3)/2 = 1

*/

#include<bits/stdc++.h>

using namespace std;

int max(int a, int b) {return (a > b ? a : b);}
int min(int a, int b) {return (a < b ? a : b);}

int main (void) {

    int a, b, d, s;

    cin >> a >> b;

    d = min(a, b);
    s = (max(a, b) - min(a, b))/2;

    cout << d << " " << s << endl;

    return 0;
}