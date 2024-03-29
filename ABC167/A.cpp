#include<bits/stdc++.h>

using namespace std;

int main() {

    string S, T;
    cin >> S >> T;

    int number = T.length();

    if(S + T[number - 1] == T) {
        cout << "Yes" << endl;
    }else {
        cout << "No" << endl;
    }

    return 0;
}