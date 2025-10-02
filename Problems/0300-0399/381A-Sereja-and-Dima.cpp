#include <bits/stdc++.h>

using namespace std;

int main (void) {

    int n, s(0), d(0), card;
    vector<int> cards;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> card;
        cards.push_back(card);
    }

    for (int i = 0; i < n; i++) {
        if (cards[0] > cards[cards.size() - 1]) {
            if (i % 2 == 0) s += cards[0];
            else d += cards[0];
            cards.erase(cards.begin());
        } else {
            if (i % 2 == 0) s += cards[cards.size() - 1];
            else d += cards[cards.size() - 1];
            cards.pop_back();
        }
    }

    cout << s << " " << d << endl;

    return 0;
}