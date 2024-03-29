#include<bits/stdc++.h>

using namespace std;

int main() {

    int A, B;
    cin >> A >> B;
    int ans = 0;
    int have = 1;

    while (have < B) {
        have = have + A - 1;
        ans++;
    }

    cout << ans << endl;

    return 0;
}