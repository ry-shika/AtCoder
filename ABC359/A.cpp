#include<bits/stdc++.h>

using namespace std;

int main() {

    int N;
    cin >> N;
    
    string S[N + 1];
    for (int i = 1; i <= N; i++) {
        cin >> S[i];
    }
    
    
    int ans = 0;
    
    for (int i = 1; i <= N; i++) {
        if (S[i] == "Takahashi") {
            ans++;
        }
    }
    
    cout << ans << endl;
    
    return 0;
}