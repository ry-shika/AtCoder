#include<bits/stdc++.h>

using namespace std;

int main() {

    int N;
    cin >> N;
    
    int A[N*2];
    for (int i = 1; i<= (N*2); i++) {
        cin >> A[i];
    }
    
    int colorNum = 1;
    int ans = 0;
    
    
    while (colorNum <= N) {
        int color = colorNum;
        colorNum++;
        
        for (int i = 1; i <= (N*2); i++) {
            if (color == A[i]) {
                if (((i + 2) <= (N*2)) && (A[i + 2] == color)) {
                    ans++;
                }
                break;
            }
        }
    }
    
    cout << ans << endl;
    
    return 0;
}