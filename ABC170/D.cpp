#include<bits/stdc++.h>

using namespace std;

int main () {

    int N;
    cin >> N;

    int A[N + 1];
    for(int i = 1; i <= N; i++) {
        cin >> A[i];
    }

    int ans = 0;

    for(int i = 1; i <= N; i++) {
        for(int j = 1 && j != i; j <= N + 1; j++) {
            if(A[i] % A[j] == 0) {
                break;
            }
            if(j == N + 1) {
                ans++;
            }
        }
    }

    cout << ans << endl;

    return 0;
}