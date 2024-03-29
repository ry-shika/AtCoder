#include<bits/stdc++.h>

using namespace std;

int main() {

    int N, M;
    cin >> N >> M;

    int A[M + 1];

    for (int i = 1; i <= M; i++) {
        cin >> A[i];
    }

    //cout << A[2] << endl;

    int homework = 0;

    for (int i = 1; i <= M; i++) {
        homework += A[i];
    }

    //cout << homework << endl;


    if (N >= homework) {
        cout << N - homework << endl;
    } else {
        cout << "-1" << endl;
    }

    return 0;
}