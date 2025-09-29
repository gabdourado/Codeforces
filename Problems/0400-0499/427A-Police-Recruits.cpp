/*
    Nome: Gabriel Dourado

    Solução: A lógica é o seguinte, imagine todos os policiais em uma mesa, ocorre um crime e um policial
    sai em seu carro para investigar. Se essa mesa está vazia - todos os policiais estão trabalhando - 
    então o crime não é solucionado. Novos policiais entram nessa mesa após uma contratação.

    Denotando variáveis para o número de policiais na mesa e a quantidade de crimes não solucionados, basta
    verificar se é na linha do tempo ocorreu um crime ou uma contratação e lidar com isso como explicado.

*/

#include <bits/stdc++.h>

using namespace std;

int main (void) {

    int n, integer, officers(0), untreated(0);

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> integer;
        if(integer == -1) {
            if (officers == 0) untreated++;
            else officers--;
        } else officers += integer;
    }

    cout << untreated << endl;

    return 0;
}