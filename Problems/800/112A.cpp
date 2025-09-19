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