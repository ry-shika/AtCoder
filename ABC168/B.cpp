#include<bits/stdc++.h>

using namespace std;

int main() {

    int K;
    cin >> K;

    string S;
    cin >> S;

    int length = S.length();

    if (length <= K) {
        cout << S << endl;
    } else {
        cout << S.substr(0, K) + "..." << endl;
    }

    return 0;
}