#include<bits/stdc++.h>

using namespace std;

#define rep(i, c) for(int i = 0; i < (int)c; i++)

const int inf = 1000000000;

int main() {

    int N;
    cin >> N;

    vector<int> X(N);

    for(int i = 0; i < N; i++) {
        cin >> X[i];
    }

    int MIN = X[0];
    int MAX = X[0];

    for(int i = 0; i < N; i++) {
        MIN = min(MIN, X[i]);
        MAX = max(MAX, X[i]);
    }

    int ans = inf;

    for(int i = MIN; i <= MAX; i++) {
        int cost = 0;

        rep(j, N) cost += (X[j] - i) * (X[j] - i);
        ans = min(ans, cost);
    }

    cout << ans << endl;

    return 0;
}