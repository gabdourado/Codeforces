/*
    Nome: Gabriel Dourado

    Solução: Sabe contar, primo? That's it. Só verificar o poliedro e somar o número de faces à variável
    que que conta o total de faces.

*/

#include <bits/stdc++.h>

using namespace std;

int main (void) {

    int N, faces(0);
    string polyhedron;

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> polyhedron;

        if (polyhedron == "Tetrahedron") faces += 4;
        if (polyhedron == "Cube") faces += 6;
        if (polyhedron == "Octahedron") faces += 8;
        if (polyhedron == "Dodecahedron") faces += 12;
        if (polyhedron == "Icosahedron") faces += 20;

    }

    cout << faces << endl;

    return 0;
}