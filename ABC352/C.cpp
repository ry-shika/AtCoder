#include<bits/stdc++.h>

using namespace std;

int main() {

    int N;
    cin >> N;

    // 肩の高さ
    long A[N + 1];

    // 頭の高さ
    long B[N + 1];

    for (int i = 1; i <= N; i++) {
        cin >> A[i] >> B[i];
    }

    // 肩と頭の高さの差が一番大きい巨人を探す
    long diffLen = 0;
    int diffNum = 0;

    for (int i = 1; i <= N; i++) {
        if (diffLen <= (B[i] - A[i])) {
            diffLen = (B[i] - A[i]);
            diffNum = i;
        }
    }
    
    // cout << "diffNum: " << diffNum << endl;

    long ans = 0;

    // 差が一番大きい巨人を一番上に置く
    for (int i = 1; i <= N; i++) {
        if (i != diffNum) {
            // cout << "i: " << i << ", A[i]: " << A[i] << endl;
            ans += A[i];
        }
    }

    ans += B[diffNum];

    cout << ans << endl;

    return 0;
}