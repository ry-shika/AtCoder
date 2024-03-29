#include<bits/stdc++.h>

using namespace std;

int gcd(int a, int b) {
    if (a % b == 0) {
        return(b);
    } else {
        return(gcd(b, a % b));
    }
}

int main() {

    int K;
    cin >> K;
    int member;

    vector<int> members;

    for (int i = 1; i <= K; i++) {
        for (int j = 1; j <= K; j++) {
            for (int l = 1; l <= K; l++) {

                member = gcd(gcd(i, j), l);
                members.push_back(member);
            }
        }
    }

    cout << accumulate(members.begin(), members.end(), 0LL) << endl;

    return 0;
}
