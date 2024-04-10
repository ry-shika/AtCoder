#include<bits/stdc++.h>

using namespace std;

int main() {

    int N;
    cin >> N;

    int A[N + 1], C[N + 1];
    
    for (int i = 1; i <= N; i++) {
        cin >> A[i] >> C[i];
    }

    // 各色の美味しさの最小値
    map<int, int> minimum_taste;

    for (int i = 1; i <= N; i++) {
        if (minimum_taste.contains(C[i])) {
            // すでに色が存在している場合
            minimum_taste[C[i]] = min(minimum_taste[C[i]], A[i]);
        } else {
            // 新しく色を追加する
            minimum_taste[C[i]] = A[i];
        }
    }

    int ans = -1;
    
    for (auto [c, val] : minimum_taste){
        ans = max(ans, val);
    }

    cout << ans << endl;

    return 0;
}