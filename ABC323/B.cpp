#include<bits/stdc++.h>

using namespace std;

int main() {

    string N;
    cin >> N;

    int number = atoi(N.c_str());

    string S[number + 1];
    for (int i = 1; i <= number; i++) {
        cin >> S[i];
    }

    // ×
    cout << S[2][2];

    int winNumber[number + 1];

    for (int i = 1; i<= number; i++) {

        int win = 0;

        for (int j = 0; j < number; j++) {
        }

        winNumber[i] = win;
    }

    return 0;
}