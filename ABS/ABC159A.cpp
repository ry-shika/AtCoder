#include<bits/stdc++.h>

using namespace std;

int main() {

    int N, M;
    cin >> N >> M;

    int ans = 0;
    int n, m;

    if (2 <= N) {
        n = N * (N - 1) / 2;
    } else {
        n = 0;
    }

    if (M > 2) {
        m = M * (M - 1) / 2;
    } else {
        m = 0;
    }   

    ans = n + m;

    cout << ans << endl;

    return 0;
}