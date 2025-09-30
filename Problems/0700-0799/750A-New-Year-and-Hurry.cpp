/*
    Nome: Gabriel Dourado

    Solução: Dado que ele tem 4 horas, são 240 minutos. O tempo para solucionar problemas que Limak possuirá
    será (240 - k). Agora dado esse tempo, se ele gasta 5i minutos para o problema i, queremos calcular quantos
    problemas ele conseguirá resolver.

    A solução do vovô aqui seria calcular o tempo usado para resolver os i problemas, se for menor ou 
    igual a (240 - k), posso contar como problema solucionado e partir para o próximo.
    

*/

#include<bits/stdc++.h>

using namespace std;

int main(void) {

    int n, k, time(0), problems(0);

    cin >> n >> k;

    for (int i = 1; i <= n; i++) {
        
        time += 5*i;

        if (time > 240 - k) break;

        problems++;
    }

    cout << problems << endl;


    return 0;
}