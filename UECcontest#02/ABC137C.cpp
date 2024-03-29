#include<bits/stdc++.h>

using namespace std;

int main() {

    int N;
    cin >> N;

    map<string, long long> members;

    for(int i = 0; i < N; i++) {
        string S;
        cin >> S;
        sort(S.begin(), S.end());
        members[S]++; 
    }

    long long ans = 0;

    for(auto p:members) {
        if(p.second > 1) {
            ans += p.second * (p. second - 1) / 2;
        }
    }
    
    cout << ans << endl;

    return 0;
}