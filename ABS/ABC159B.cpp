#include<bits/stdc++.h>

using namespace std;

int main() {

    string S;
    cin >> S;
    
    int N;
    N = S.length();

    if (S.substr(0, (N - 1)/ 2) == S.substr(((N + 3)/ 2) - 1)) {
        cout << "Yes" << endl;
        return 0;
    }

    cout << "No" << endl;
    
    return 0;
}