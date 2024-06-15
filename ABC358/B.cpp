#include<bits/stdc++.h>

using namespace std;

int main() {

    int N, A;
    cin >> N >> A;
    
    int T[N + 1];
    for (int i = 1; i <= N; i++) {
        cin >> T[i];
    }
    
    int nowTime = 0;
    
    int ans[N + 1];
    
    for (int i = 1; i <= N; i++) {
        // 現在時刻と並びはじめの時間の比較
        if (nowTime > T[i]) {
            ans[i] = nowTime + A;
            nowTime = nowTime + A;
        } else {
            ans[i] = T[i] + A;
            nowTime = T[i] + A;
        }
        
        cout << ans[i] << endl;
    }
    
    return 0;
}