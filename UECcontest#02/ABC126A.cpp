#include<bits/stdc++.h>

using namespace std;

int main() {

    int N, K;
    cin >> N >> K;

    string S;
    cin >> S;

    S[K - 1] = S[K - 1] + 32;

    cout << S << endl; 

    return 0;
}