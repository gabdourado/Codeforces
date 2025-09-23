/*
    Nome: Gabriel Dourado

    Solução: Dada a string S, vamos contar a quantidade de letras maiúsculas e minúsculas. Se a quantidade de
    letras minúsculas for maior ou igual que a de maiúsculas, convertemos para a palavra minúsculo. Caso ocorra
    o contrário, convertemos para maiúsculo. 

*/

#include <bits/stdc++.h>

using namespace std;

int main (void) {

    string S;
    int count_upper(0), count_lower(0), convert;

    cin >> S;

    for (int  i = 0; i < S.size(); i++) {
        if (S[i] >= 'a' && S[i] <= 'z') count_lower++;
        if (S[i] >= 'A' && S[i] <= 'Z') count_upper++;
    }

    if (count_lower >= count_upper) {
        for (int i = 0; i < S.size(); i++)
            if (S[i] >= 'A' && S[i] <= 'Z') S[i] += 32;
    } else{
        for (int i = 0; i < S.size(); i++)
            if (S[i] >= 'a' && S[i] <= 'z') S[i] -= 32;
    }
    
    cout << S << endl;

    return 0;
}