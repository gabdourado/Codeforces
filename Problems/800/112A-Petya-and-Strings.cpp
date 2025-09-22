/*
    Nome: Gabriel Dourado

    Solução: Dadas duas strigns S e T, S é dita menor que T, em ordem lexicográfica, se existe um i, tal que 
    S[i] < T[i], ou seja, o caractere da posição i de S aparece primeiro queo caractere da posição i de T. O 
    mesmo ocorre para uma string S ser maior que T. Duas strings S e T são iguais S[i] == S[i] para todo i.
    
    Assim, vamos percorrer S e T e verificar se em algum momento S[i] < T[i], pois isso significa que S é menor
    que T, ou se S[i] > T[i], pois então S é maior que T ou se ambos os casos não ocorrem, S é igual a T.

*/

#include <bits/stdc++.h>

using namespace std;

int main (void) {

    string str1, str2;
    int status(0);

    cin >> str1 >> str2;
    
    for (int i = 0; i < str1.size(); i++) {
        
        if (str1[i] >= 'A' && str1[i] <= 'Z') str1[i] += 32;
        if (str2[i] >= 'A' && str2[i] <= 'Z') str2[i] += 32;

        if (str1[i] < str2[i]) {
            status = -1;
            break;
        } 
        
        if (str1[i] > str2[i]) {
            status = +1;
            break;
        }
    }

    cout << status << endl;
    
    return 0;
}