#include<bits/stdc++.h>

using namespace std;

int main() {

    int N, Q;
    cin >> N >> Q;

    int T[Q + 1];
    for (int i = 1; i <= Q; i++) {
        cin >> T[i];
    }

    int Teeth[1001];
    for (int i = 1; i <= N; i++) {
        Teeth[i] = 1;
    }

    int max = N;
    int ans = 0;

    for (int i = 1; i <= Q; i++) {
        if (Teeth[T[i]] == 1) {
            Teeth[T[i]] = 0;
        } else {
            Teeth[T[i]] = 1;
        }

        if (T[i] > max) {
            max = T[i];
        }
    }

    for (int i = 1; i <= max; i++) {
        ans += Teeth[i];
    }
    
    cout << ans << endl;

    return 0;
}