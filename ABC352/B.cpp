#include<bits/stdc++.h>

using namespace std;

int main() {

    string S, T;
    cin >> S >> T;

    int Slen = S.size();
    int Tlen = T.size();

    int ans[Slen];
    
    int s = 0;
    int t = 0;
    
    while(s < Slen) {
        while (t < Tlen) {
            if (S[s] == T[t]) {
                ans[s] = t + 1;
                s++;
                t++;
            } else {
                t++;
            } 
        }
    }
    
    for (int i = 0; i < Slen; i++) {
        if (i == (Slen - 1)) {
            cout << ans[i] << endl;
        } else {
            cout << ans[i] << " ";
        }
    }

    return 0;
}