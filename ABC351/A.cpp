#include<bits/stdc++.h>

using namespace std;

int main() {

    int A[10];
    int B[10];

    int Asum = 0;
    int Bsum = 0;
    int ans = 0;

    for (int i = 1; i <= 9; i++) {
        cin >> A[i];
        Asum += A[i];
    }

    for (int i = 1; i <= 8; i++) {
        cin >> B[i];
        Bsum += B[i];
    }

    ans = (Asum - Bsum) + 1;

    cout << ans << endl;

    return 0;
}