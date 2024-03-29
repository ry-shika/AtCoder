#include<bits/stdc++.h>

using namespace std;

int main() {

    int N, A, B;
    cin >> N >> A >> B;

    string S;
    cin >> S;

    int count = 0;
    int count_B = 0;

    for (int i = 0; i < N; i++) {

        if (S[i] == 'a' && count < A + B) {
            count++;
            cout << "Yes" << endl;

        } else if (S[i] == 'b' && count < A + B && count_B < B) {
            count++;
            count_B++;
            cout << "Yes" << endl;

        } else {
            cout << "No" << endl;
        }
    }

    return 0;
}