#include<bits/stdc++.h>

using namespace std;

int main() {

    int N, Y;
    cin >> N >> Y;

    int c = 0;
    int ans10000 = -1, ans5000 = -1, ans1000 = -1;

    for(int a = 0; a <= N; a++) {
        for(int b = 0; a + b <= N; b++) {
            int c = N - a - b;
            int total = a * 10000 + b * 5000 + c * 1000;

            if (total == Y) {
                ans10000 = a;
                ans5000 = b;
                ans1000 = c;
            }
        }
    }

    cout << ans10000 << " " << ans5000 << " " << ans1000 << endl;

    return 0;
}