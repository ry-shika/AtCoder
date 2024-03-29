#include<bits/stdc++.h>

using namespace std;

int main() {
    int N;
    cin >> N;

    int d[N + 1];
    for (int i = 1; i <= N; i++) {
        cin >> d[i];
    }

    int ans = 1;

    sort(d + 1, d + N + 1, greater<int>());

    for (int i = 1; i < N; i++) {
    
        if (d[i] > d[i + 1]) {
            ans++;
        }
    }
       
    cout << ans << endl;

    return 0;
}