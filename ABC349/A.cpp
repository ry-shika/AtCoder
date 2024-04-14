#include<bits/stdc++.h>

using namespace std;

int main() {

    int N;
    cin >> N;

    int A[N];
    for (int i = 1; i < N; i++) {
        cin >> A[i];
    }

    int ans[N + 1];
    for (int i = 1; i <= N; i++) {
        ans[i] = 0;
    }

    for (int i = 1; i < N; i++) {
        ans[i + 1] = ans[i] - A[i];
        // cout << i << ": " << ans[i] << endl;
    }

    cout << ans[N] << endl;

    return 0;
}