#include<bits/stdc++.h>

using namespace std;

int main() {

    int N, K;
    cin >> N >> K;

    int A[N + 1];
    for (int i = 1; i <= N; i++) {
        cin >> A[i];
    }

    int ans = 0;
    int num = 1;

    while (num <= N) {
        ans++;
        // cout << ans << "回目" << endl;
        int seat = 0;
        bool judge = true;

        while (judge) {
            // あるグループを入れれる場合
            if ((seat + A[num]) <= K) {
                seat += A[num];
                // cout << "seat: " << seat << endl;
                // cout << "グループ: " << num << endl;
                num++;
                
                // グループがいなくなった場合
                if (num > N) {
                    judge = false;
                }

            } else {
            // あるグループを入れれない場合
                judge = false;
            }
        }
    }

    cout << ans << endl;

    return 0;
}