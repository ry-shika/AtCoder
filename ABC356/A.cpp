#include<bits/stdc++.h>

using namespace std;

int main() {

    int N, L, R;
    cin >> N >> L >> R;

    for (int i = 1; i <= N; i++) {
        
        // 逆順の開始の番号の時
        if (i == L) {
            for (int j = R; j >= L; j--) {
                cout << j << endl;
            }
            
            i = R + 1;
        }

        if (i <= N) {
            cout << i << endl;
        }
    }
    
    return 0;
}