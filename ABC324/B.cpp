#include<bits/stdc++.h>

using namespace std;

int main() {

    long int N;
    cin >> N;

    while ((N % 2) == 0) {
        N = (N / 2);
        // cout << "N: " << N << endl;
    }

    while ((N % 3) == 0) {
        N = (N / 3);
        // cout << "N: " << N << endl;
    }

    if (N == 1) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}