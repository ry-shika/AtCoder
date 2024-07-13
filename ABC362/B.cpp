#include<bits/stdc++.h>

using namespace std;

int main() {

    int Xa, Ya, Xb, Yb, Xc, Yc;
    cin >> Xa >> Ya >> Xb >> Yb >> Xc >> Yc;

    int X1, Y1, X2, Y2;

    bool ans = false;

    // Aを基準に考えた時
    X1 = Xb - Xa;
    Y1 = Yb - Ya;
    X2 = Xc - Xa;
    Y2 = Yc - Ya;
    if ((X1 * X2 + Y1 * Y2) == 0) {
        ans = true;
    }

    // Bを基準に考えた時
    X1 = Xa - Xb;
    Y1 = Ya - Yb;
    X2 = Xc - Xb;
    Y2 = Yc - Yb;
    if ((X1 * X2 + Y1 * Y2) == 0) {
        ans = true;
    }

    // Cを基準に考えた時
    X1 = Xa - Xc;
    Y1 = Ya - Yc;
    X2 = Xb - Xc;
    Y2 = Yb - Yc;
    if ((X1 * X2 + Y1 * Y2) == 0) {
        ans = true;
    }

    if (ans == true) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    } 

    return 0;
}