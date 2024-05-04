#include<bits/stdc++.h>

using namespace std;

int main() {

    int N, X, Y, Z;
    cin >> N >> X >> Y >> Z;

    // Xの方がYより大きい時
    if (X >= Y) {
        if ((Y <= Z) && (X >= Z)) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    } else {
        // Yの方がXより大きい時  
        if ((X <= Z) && (Y >= Z)) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }

    return 0;
}