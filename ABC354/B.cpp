#include<bits/stdc++.h>

using namespace std;

int main() {

    int N;
    cin >> N;

    string S[N + 1];
    int C[N + 1];
    for (int i = 0; i < N; i++) {
        cin >> S[i] >> C[i];
    }

    // 辞書ソート
    string tmp;
    for (int i = 0; i < (N - 1); ++i) {
        for (int j = 0; j < (N - 1); ++j) {
            if (S[j] > S[j + 1]) {
                tmp = S[j];
                S[j] = S[j + 1];
                S[j + 1] = tmp;
            }
        }
    }

    int sum = 0;

    for (int i = 0; i < N; i++) {
        sum += C[i];
    }

    int num = sum % N;

    cout << S[num] << endl;

    return 0;
}