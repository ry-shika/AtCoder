#include<bits/stdc++.h>

using namespace std;

int main() {

    int N;
    cin >> N;

    int A[N + 1];
    for (int i = 1; i <= N; i++) {
        cin >> A[i];
    }

    int n = A[1];
    int ans = 0;

    for (int i = 2; i <= N; i++) {
        if (n != A[i]) {
            ans = 1;
            break;
        }
    }

    if (ans == 0) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}