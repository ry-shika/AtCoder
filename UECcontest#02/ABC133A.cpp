#include<bits/stdc++.h>

using namespace std;

int main() {

    int N, A, B;
    cin >> N >> A >> B;

    int train = 0;
    int taxi = 0;

    train = N * A;

    taxi = B;

    if (train <= taxi) {
        cout << train << endl;
    } else {
        cout << taxi <<endl;
    }

    return 0;
}