#include<bits/stdc++.h>

using namespace std;

int main() {

    int N, M;
    cin >> N >> M;

    string S, T;
    cin >> S >> T;

    int before = 0;
    int after = 0;
    int ans;

    for (int i = 0; i < N; i++) {
        if (S[i] != T[i]) {
            before = 1;
            break;
        }
    }

    for (int i = 0; i < N; i++) {
        if (S[i] != T[M - N + i]) {
            after = 1;
            break;
        }
    }

    if (before == 0 && after == 0) {
        ans = 0;
    }
    if (before == 0 && after == 1) {
        ans = 1;
    }
    if (before == 1 && after == 0) {
        ans = 2;
    }
    if (before == 1 && after == 1) {
        ans = 3;
    }

    cout << ans << endl;
}