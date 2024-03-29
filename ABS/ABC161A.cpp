#include<bits/stdc++.h>

using namespace std;

int main() {

    int X, Y, Z;
    cin >> X >> Y >> Z;

    int x = X;
    int y = Y;
    int z = Z;

    X = z;
    Y = x;
    Z = y;

    cout << X << " " << Y << " " << Z << endl;

    return 0;
}