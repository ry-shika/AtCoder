#include<bits/stdc++.h>

using namespace std;

int main() {

    int N, M;
    cin >> N >> M;
    
    int A[M + 1];
    for (int i = 1; i <= M; i++) {
        cin >> A[i];
    }

    int X[N + 1][M + 1];
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= M; j++) {
            cin >> X[i][j];
        }
    }

    bool ans = true;

    for (int i = 1; i <= M; i++) {
        int sum = 0;
        for (int j = 1; j <= N; j++) {
            sum += X[j][i];
        }

        // 合計と目標数値の比較
        if (A[i] > sum) {
            ans = false;
        }
    }

    if (ans == true) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    
    return 0;
}