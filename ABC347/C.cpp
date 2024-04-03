#include<bits/stdc++.h>

using namespace std;

int main() {

    int N, A, B;
    cin >> N >> A >> B;

    int week = (A + B);

    int D[N + 1];
    for (int i = 1; i <= N; i++) {
        cin >> D[i];
    }

    for (int i = 1; i <= N; i++) {
        D[i] = D[i] % (A + B);
        // cout << D[i] << endl;
    }

    bool ans = true;

    for (int i = 1; i <= N; i++) {
        if (D[i] > A) {
            ans = false;
        }
    }

    if (ans) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}