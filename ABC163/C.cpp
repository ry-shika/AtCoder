#include<bits/stdc++.h>

using namespace std;

int main() {

    int N;
    cin >> N;

    int ans[200010];

    int A[200010];
    for (int i = 2; i <= N; i++) {
        cin >> A[i];
    } 

    for(int i = 2; i <= N; i++) {
        ans[A[i]]++;
    }

    for(int i = 1; i <= N; i++) {
        cout << ans[i] << endl;
    }

    return 0;
}
