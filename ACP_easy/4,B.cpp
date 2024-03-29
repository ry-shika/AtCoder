#include<bits/stdc++.h>

using namespace std;

int main() {

    long N;
    cin >> N;

    long X = ceil((float) N / 1.08);

    long S = floor((float) X * 1.08);

    if (S == N) {
        cout << X << endl;
    } else {
        cout << ":(" << endl;
    }
    
    return 0;
}