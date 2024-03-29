#include<bits/stdc++.h>

using namespace std;

int main() {
    int N, W;
    cin >> N >> W;

    int baggage_v[N + 1], baggage_w[N + 1];

    int dp[N + 1][W + 1];

    for (int i = 1; i <= N; i++) {
        cin >> baggage_v[i] >> baggage_w[i];
    }

    for (int w = 0; w <= W; w++) {
        dp[0][w] = 0;
    }

    for (int i = 0; i < N; i++) {
        int _baggage_v = baggage_v[i + 1];
        int _baggage_w = baggage_w[i + 1];

        for (int w = 0; w <= W; w++) {
            if (_baggage_w <= w) {
                dp[i + 1][w] = max(dp[i][w], dp[i][w - _baggage_w] + _baggage_v); //i = 1 weight = 3 (1,2) 
            } else {
                dp[i + 1][w] = dp[i][w];
            }
        }
    }

    cout << dp[N][W] << endl;

    return 0;
}