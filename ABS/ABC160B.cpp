#include<bits/stdc++.h>

using namespace std;

int main() {

    int X;
    cin >> X;

    int ans = 0;
    int a, b;

    a = X / 500;
    X = X % 500;

    b = X / 5;

    ans = a * 1000 + b * 5;

    cout << ans << endl;

    return 0;
}