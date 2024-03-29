#include<bits/stdc++.h>

using namespace std;

int main() {
    int N;
    cin >> N;

    int A[N + 1];
    for (int i = 1; i <= N; i++) {
        cin >> A[i];
    }

    int ans = INT_MAX;

    for (int i = 1; i <= N; i++) {
        int count = 0;

        while (A[i] % 2 == 0) {
            A[i] = A[i] / 2;
            count++;
        }

        if (count < ans) {
            ans = count;
        }
    }

    cout << ans << endl;

    return 0;
}