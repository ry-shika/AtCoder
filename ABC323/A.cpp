#include<bits/stdc++.h>

using namespace std;

int main() {

    string S;
    cin >> S;

    int ans = 0;

    for (int i = 0; i < 16; i++) {
        if ((i % 2) != 0) {
            if (S[i] != '0') {
                ans = 1;
            }
        }
    }

    if (ans == 0) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}