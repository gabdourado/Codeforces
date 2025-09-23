#include <bits/stdc++.h>

using namespace std;

int main (void) {
    
    string s;
    vector<char> numbers;

    cin >> s;

    for (int i = 0; i < s.size(); i++) if (i % 2 == 0) numbers.push_back(s[i]);

    sort(numbers.begin(), numbers.end());

    for (int i = 0; i < numbers.size(); i++) {
        cout << numbers[i];
        if (i != numbers.size() - 1) cout << "+";
    } cout << endl;
    
    return 0;
}