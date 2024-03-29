#include<bits/stdc++.h>

using namespace std;

int main() {

    int N, M;
    cin >> N >> M;

    int H[N + 1];
    for(int i = 1; i <= N; i++) {
        cin >> H[i];
    }

    int A[M + 1], B[M + 1];
    for(int i = 1; i <= M; i++) {
        cin >> A[i] >> B[i];
    }

    set<int> members;

    for(int i = 1; i <= M; i++) {
        if(H[A[i]] <= H[B[i]]) {
            members.insert(A[i]);
        }

        if(H[B[i]] <= H[A[i]]) {
            members.insert(B[i]);
        }
    }

    int member = members.size();

    cout << N - member << endl;


    return 0;
}