#include<bits/stdc++.h>

using namespace std;

int main() {

    int N;
    cin >> N;

    int H[N + 1];
    for (int i = 1; i <= N; i++) {
        cin >> H[i];
    }

    int JudgeBill = H[1];

    for (int i = 2; i <= N; i++) {
        if (JudgeBill < H[i]) {
            cout << i << endl;
            return 0;
        }
    }

    cout << "-1" << endl;

    return 0;
}