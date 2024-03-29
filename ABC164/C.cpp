#include<bits/stdc++.h>

using namespace std;

int main() {

    int N;
    cin >> N;

    string S[N + 1];

    for (int i = 1; i <= N; i++) {
        cin >> S[i];
    }

    set<string> members;

    for (int i = 1; i <= N; i++) {
        members.insert(S[i]);
    }

    cout << members.size() << endl;

    return 0;
}