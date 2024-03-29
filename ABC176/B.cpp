#include<bits/stdc++.h>

using namespace std;

int main() {

    string N;
    cin >> N;

    int number = N.length();
    int n = 0;

    for (int i = 0; i < number; i++) {
        n += N[i] - '0';
    }

    if(n % 9 == 0) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}