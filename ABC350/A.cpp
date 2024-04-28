#include<bits/stdc++.h>

using namespace std;

int main() {

    string S;
    cin >> S;

    string A = S.substr(3);

    int B = stoi(A);
    if ((1 <= B) && (B <= 349) && (B != 316)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}