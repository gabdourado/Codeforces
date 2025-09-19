#include <bits/stdc++.h>

using namespace std;

int main (void) {

    int house, steps(0);

    cin >> house;

    for(int i = 5; i > 0; i--) {
        if(house >= i) {
            steps += (house / i);
            house %= i;
        }
    }

    cout << steps << endl;
    
    return 0;
}

/*
    while(house > 0) {
        if (house % 5 == 0) {
            steps = house / 5;
            house %= 5;
        } else if (house % 4 == 0) {
            steps = house / 4;
            house %= 4;
        } else if (house % 3 == 0) {
            steps = house / 3;
            house %= 3;
        } else if (house % 2 == 0) {
            steps = house / 2;
            house %= 2;
        } else {
            steps = house / 1;
            house %= 1;
        }
    }

*/