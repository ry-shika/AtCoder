#include<bits/stdc++.h>

using namespace std;

int main() {

    int N;
    cin >> N;

    // カードの強さ
    int A[N + 1];

    // カードのコスト
    int C[N + 1];

    // 捨てるカードを記録
    int count[N + 1];

    for (int i = 1; i <= N; i++) {
        cin >> A[i] >> C[i];
        count[i] = 0;
    }

    int ans = N;

    for (int i = 1; i < N; i++) {
        // cout << "i: " << i << endl;
        for (int j = 2; j <= N; j++) {
            // cout << "j: " << j << endl;

            // iが捨てられたカードの時iを見ないようにする処理
            if (count[i] == i) {
                // cout << "break!!" << endl;
                break;
            }

            // iの方が捨てるカードの時
            if (A[i] < A[j]) {
                if (C[i] > C[j]) {
                    count[i] = i;
                    ans--;
                }
            }

            // jの方が捨てるカードの時
            if (A[i] > A[j]) {
                if (C[i] < C[j]) {
                    count[j] = j;
                    ans--;
                }
            }
        }
    }

    cout << ans << endl;

    int num = 0;

    for (int i = 1; i <= N; i++) {
        if (count[i] != i) {
            if (num == ans) {
                cout << i;
            } else {
                cout << i << " ";
                num++;
            }
        }
    }

    return 0;
}