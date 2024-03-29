#include<bits/stdc++.h>

using namespace std;

int main () {

    int N, K;
    cin >> N >> K;

    int p[N + 1];
    for(int i = 0; i < N; i++) {
        cin >> p[i];
    }

    sort(p, p + N);

    int ans = 0;

    for(int i = 0; i < K; i++) {
        ans += p[i];
    }

    cout << ans << endl;

    return 0;
}