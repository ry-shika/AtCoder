#include<bits/stdc++.h>

using namespace std;

int main() {

    int N;
    long long K;
    cin >> N >> K;

    int A[N + 1];
    for (int i = 1; i <= N; i++) {
        cin >> A[i];
    }

    int country = 1;
    int number = 0;
    int B = 0;

    for (long long i = 1; i <= K; i++) {
        country = A[country];

        if(country == 1) {
            number = i;

            B = K % i + 1;
            cout << A[B] << endl;
            return 0;
        }
    }

    cout << country << endl;

    return 0;
}