#include<bits/stdc++.h>

using namespace std;

int main() {
    
    int N, K;
    cin >> N >> K;

    int x[N + 1];
    for(int i = 1; i <= N; i++) {
        cin >> x[i];
    }

    int ans[N + 1];
    for(int i = 1; i <= N; i++) {
        ans[i] = 0;
    }

    for(int i = 1; i <= N; i++) {

        int A = 0, B = 0;

        A = x[i] * 2;
        B = abs(K - x[i]) * 2;
        ans[i] = min(A, B);
    }

    int answer = 0;

    for(int i = 1; i <= N; i++) {
        answer += ans[i];
    }

    cout << answer << endl;

    return 0;
}