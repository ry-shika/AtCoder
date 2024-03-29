#include<bits/stdc++.h>

using namespace std;

int main() {

    int N, M;
    cin >> N >> M;

    int A[M + 1];                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   
    for (int i = 1; i <= M; i++) {
        cin >> A[i];
    }

    int ans[N + 1];

    int i = 1;
    for (int j = 1; j <= N; j++) {
        if (j == A[i]) {
            ans[j] = 0;
        } else {
            ans[j] = A[i] - j;
        }
        if (j >= A[i]) {
            i++;
        }
    }

    for (int i = 1; i <= N; i++) {
        cout << ans[i] << endl;
    }

    return 0;
}