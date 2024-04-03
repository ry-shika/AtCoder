#include<bits/stdc++.h>

using namespace std;

int main() {

    int N, K;
    cin >> N >> K;

    int A[N + 1];
    for (int i = 1; i<= N; i++) {
        cin >> A[i];
    }

    int B[N + 1];
    int count = 0;

    for (int i = 1; i <= N; i++) {
        if ((A[i] % K) == 0) {
            B[count] = (A[i] / K);
            count++;
        }
    }

    for (int i = 0; i < count; i++) {
        if (i == (count - 1)) {
            cout << B[i] << endl;
        } else {
            cout << B[i] << " ";
        }
    }

    return 0;
}