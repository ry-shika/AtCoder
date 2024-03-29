#include<bits/stdc++.h>

using namespace std;

int main() {
    int N, A, B;
    cin >> N >> A >> B;

    int ans = 0;

    for (int i = 1; i <= N; i++) {
        int num = i, sum = 0;

        while (num > 0) {
            sum += num % 10;
            num = num / 10;
        }
        
        if (A <= sum && sum <= B) {
            ans = ans + i;
        }
    }

    cout << ans << endl;

    return 0;
}