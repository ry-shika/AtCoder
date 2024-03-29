#include<bits/stdc++.h>

using namespace std;

int main() {

    int N, K;
    cin >> N >> K;

    int d[101], A[101][101];

    for(int i = 1; i <= K; i++) {
        cin >> d[i];
        for(int j = 1; j <= d[i]; j++) {
            cin >> A[i][j];
        }
    }

    set<int> members;

    for(int i = 1; i <= K; i++) {
        for(int j = 1; j <= d[i]; j++) {
            members.insert(A[i][j]);
        }
    }

    int have = members.size();

    cout << N - have << endl;

    return 0;
}