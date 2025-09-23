/*
    Nome: Gabriel Dourado

    Solução: Temos uma fila de boys (B) e girls (G). Em cada instante de tempo x, o B da posição i,
    se estiver ao lado de uma G na posição (i+1), sede seu lugar para ela. Assim, no tempo (x+1), a 
    G da posição (i+1) estará na posição i e o B na (i+1). Veja o exemplo com o caso base 1:

    Fila Inicial: 
    
       | B | G | G | B | G |
       | 1 | 2 | 3 | 4 | 5 |

    G -> [1]
    B -> [2]

    B -> [5]
    G -> [4]
    
    Fila após 1 tempo:

       | G | B | G | G | B |
       | 1 | 2 | 3 | 4 | 5 |

    Note que são duas ocorrências onde B possui G a sua direita, isso é importantee pois irão ocorrer somente
    duas trocas, algo que é preciso contornar em uma abordagem sequencial como em um loop for.

*/

#include <bits/stdc++.h>

using namespace std;

int main (void) {

    int N, T;
    string queue;

    cin >> N >> T >> queue;

    for (int i = 1; i <= T; i++) {
        for (int i = 0; i < N - 1; i++) {
            if (queue[i] == 'B' && queue[i+1] == 'G') {
                queue[i] = 'G';
                queue[i+1] = 'B';
                i++;
            }
        } 
    }

    cout << queue << endl;

    return 0;
}