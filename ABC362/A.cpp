#include<bits/stdc++.h>

using namespace std;

int main() {

    int R, G, B;
    cin >> R >> G >> B;

    string C;
    cin >> C;

    int ans = 0;

    // Cが赤の場合
    if (C == "Red") {
        ans = min(G, B);
    } else if (C == "Green") {
        ans = min(R, B);
    } else if (C == "Blue") {
        ans = min(R, G);
    }

    cout << ans << endl;
    
    return 0;
}