#include<bits/stdc++.h>

using namespace std;

int main() {

    int X, N;
    cin >> X >> N;

    int p[N + 1];
    for (int i = 1; i <= N; i++) {
        cin >> p[i];
    }

    p[N + 1] = 100000;

    for (int i = 0; i <= 50; i++) {
        int ans_up = X + i;
        int ans_down = X - i - 1;
        

        for (int j = 1; j <= N + 1; j++) {
            if (ans_up == p[j]) {
                break;
            }
            if (j == N + 1) {
                cout << ans_up << endl;;
                return 0;
            }
        }

        for (int j = 1; j <= N + 1; j++) {
            if (ans_down == p[j]) {
                break;
            }
            if (j == N + 1) {
                cout << ans_down << endl;;
                return 0;
            }              
        }
    }

    return 0;
}