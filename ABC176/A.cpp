#include<bits/stdc++.h>

using namespace std;

int main() {

    int N, X, T;
    cin >> N >> X >> T;

    int number;

    if(N % X == 0) {
        number = N / X;
    } else {
        number = (N / X) + 1;
    }

    int ans = T * number;

    cout << ans << endl;

    return 0;
}