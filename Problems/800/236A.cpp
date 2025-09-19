#include <bits/stdc++.h>

using namespace std;

int main (void) {

    string user;
    set<char> letters;

    cin >> user;

    for (int i = 0; i < user.size(); i++) letters.insert(user[i]);

    if (letters.size() % 2 == 0) cout << "CHAT WITH HER!" << endl;
    else cout << "IGNORE HIM!" << endl;
    
    return 0;
}