#include<bits/stdc++.h>

using namespace std;

int main() {

    int N, M, C;
    cin >> N >> M >> C;

    int ans = 0;

    int B[M + 1];
    for (int m = 1; m <= M; m++) {
        cin >> B[m];
    }

    int A[N + 1][M + 1];
    for (int n = 1; n <= N; n++) {
        for (int m = 1; m <= M; m++) {
            cin >> A[n][m];
        }
    }

    for (int n = 1; n <= N; n++) {

        vector<int> members;

        for (int m = 1; m <= M; m++) {
            int x = A[n][m] * B[m];
            members.push_back(x);
        }

        int sum = accumulate(members.begin(), members.end(), 0LL) + C;
        if (sum > 0) {
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}