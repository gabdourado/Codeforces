/*
    Nome: Gabriel Dourado

    Solução: Sem truques! Não consegui pensar em um solução melhor do que ir verificando caso a caso em um
    loop. Então vamos dividir em 4 casas (milhar, centena, dezena e unidade), já que a entrada é um número
    entre 1000 e 9000, e a maior resposta seria quando Y = 9000, que é 9012, então a resposta também tem 4 
    casas.

    Em um loop interamos o valor de Y e vemos se em algum momentos os valores da unidade de milhar, centena,
    dezena e unidade são diferentes entre si, se sim, encontramos o número.

*/

#include<bits/stdc++.h>

using namespace std;


bool dif(int m, int c, int d, int u) {
    if (m == c || m == d || m == u || c == d || c ==u || d == u) return false;
    return true;
}

int main(void) {

    int Y, number, m, c, d, u;

    cin >> Y;

    while(true) {

        Y++;

        m = (Y / 1000) % 10;

        c = (Y / 100) % 10;
        
        d = (Y / 10) % 10;
        
        u = Y % 10;
        
        if (dif(m, c, d, u)) break;

    }

    number = m * 1000 + c * 100 + d * 10 + u;
    
    cout << number << endl;

    return 0;
}