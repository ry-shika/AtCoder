#include<bits/stdc++.h>

using namespace std;

int main() {

    double D, T, S;
    cin >> D >> T >> S;

    double minutes = D / S;

    // cout << minutes << endl;

    if(T >= minutes) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}