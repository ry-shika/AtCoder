#include<bits/stdc++.h>

using namespace std;

int main() {

    string N;
    cin >> N;
    // vector<int> A;

    // for (int i = 0; i <= 4; i++) {
    //     A.insert(A.begin() + i,i);
    // }

    for (int i = 0; i <= 2; i++) {
        if (N[i] == '7') {
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;

    return 0;
}