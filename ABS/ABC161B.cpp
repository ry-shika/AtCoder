#include<bits/stdc++.h>

using namespace std;

int main() {

    int N, M;
    cin >> N >> M;
    int A[N + 1];

    int total = 0;

    for (int i = 1; i <= N; i++) {
        cin >> A[i];
        total = total + A[i];
    }

    int count = 0;

    for (int i = 1; i <= N; i++) {
        if (A[i] * 4 * M > total) {
            count++;
        }
    }

    //cout << total << endl;

    //cout << count << endl;

    if (M <= count) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}