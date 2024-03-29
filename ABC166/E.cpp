#include<bits/stdc++.h>

using namespace std;

int main() {

    int N;
    cin >> N;

    int A[N + 1];
    for(int i = 1; i <= N; i++) {
        cin >> A[i];
    }

    int ans = 0;

    for(int i = 1; i < N; i++) {
        for(int j = i + 1; j <= N; j++) {
            if(j - i == A[i] + A[j]) {
                ans++;
            }
        }
    }

    cout << ans << endl;

    return 0;
}