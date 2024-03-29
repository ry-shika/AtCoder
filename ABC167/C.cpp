#include<bits/stdc++.h>

using namespace std;

int main() {

    int N, M, X;
    cin >> N >> M >> X;

    int C[N + 1], A[N + 1][M + 1];
    for (int i = 1; i <= N; i++) {

        cin >> C[i];

        for (int j = 1; j <= M; j++) {
            
            cin >> A[i][j];           
        }
    }

    //初期準備
    for (int j = 1; j <= M; j++) {

        int sum[M + 1];
        sum[j] = 0;

        for (int i = 1; i <= N; i++) {
            sum[j] += A[i][j];           
        }

        if (sum[j] < X) {
            cout << "-1" << endl;
        }
    }

    








    return 0;
}