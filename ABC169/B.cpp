#include<bits/stdc++.h>

using namespace std;

int main() {

    int N;
    cin >> N;

    long long A[N + 1]; 
    for (int i = 1; i <= N; i++) {
        cin >> A[i];
    }

    for (int i = 1; i <= N; i++) {
        if (A[i] == 0) {
            cout << "0" << endl;
            return 0;
        }
    }

    long long ans = 1;

    for (int i = 1; i <= N; i++) {
        if (A[i] <= 1000000000000000000 / ans) {
            ans *= A[i];
        } else {
            cout << "-1" << endl;
            return 0;
        }
    }

    cout << ans << endl;

}