#include<bits/stdc++.h>

using namespace std;

int main() {

    long long N, K;
    cin >> N >> K;

    long long a, b;

    a = N % K;

    b = abs (a - K);


    cout << min(a, b) << endl;

    return 0;
}