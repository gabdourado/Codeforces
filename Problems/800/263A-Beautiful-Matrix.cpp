#include <bits/stdc++.h>

using namespace std;

int main (void) {
    
    int dist_x, dist_y, moves(0);
    int matrix[5][5];

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            
            cin >> matrix[i][j];

            if (matrix[i][j] == 1) {

                dist_x = 2 - i;
                dist_y = 2 - j;

                if (dist_x < 0) dist_x *= -1;
                if (dist_y < 0) dist_y *= -1;

                moves += dist_x + dist_y;
            }
        }
    }

    cout << moves << endl;

    return 0;
}