#include<bits/stdc++.h>

using namespace std;

int main() {

    long long N, D;
    cin >> N >> D;

    long long X[N + 1], Y[N + 1];
    for(int i = 1; i <= N; i++) {
        cin >> X[i] >> Y[i];
    }

    int ans = 0;

    for(int i = 1; i <= N; i++) {
        long long length = (X[i] * X[i]) + (Y[i] * Y[i]);

        if(length <= D * D) {
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}