#include<bits/stdc++.h>

using namespace std;

int main() {

    int N;
    cin >> N;

    string A[N + 1];
    string B[N + 1];

    for (int i = 1; i <= N; i++) {
        cin >> A[i];
    }

    for (int i = 1; i <= N; i++) {
        cin >> B[i];
    }

    for (int i = 1; i <= N; i++) {
        if (A[i] != B[i]) {
            for (int j = 0; j < N; j++) {
                if (A[i][j] != B[i][j]) {
                    cout << i << " " << (j + 1) << endl;
                    break;
                }
            }
        }
    }

    return 0;
}