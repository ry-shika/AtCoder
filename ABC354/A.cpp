#include<bits/stdc++.h>

using namespace std;

int main() {

    int H;
    cin >> H;

    bool judge = true;

    int ans = 1;
    int length = 0;

    while (judge) {
        if (H > length) {
            int Today = 1;
            for (int i = 1; i < ans; i++) {
                Today = Today * 2;
            }
            length += Today;
            // cout << "length: " << length << endl;
            
            if (H < length) {
                judge = false;
                break;
            }
            
        } else {
            judge = false;
            break;
        }
        ans++;
    }

    cout << ans << endl;

    return 0;
}