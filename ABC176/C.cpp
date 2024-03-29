#include<bits/stdc++.h>

using namespace std;

int main() {

    int N;
    cin >> N;

    int A[N + 1];
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    long long ans = 0;
    int MaxNum = 0;

    for (int i = 0; i < N; i++) {
        MaxNum = max(MaxNum, A[i]);
        int Bi = MaxNum;
        ans += Bi - A[i];
        }

        cout << ans << endl;

    return 0;
    
    }