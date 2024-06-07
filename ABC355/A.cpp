#include<bits/stdc++.h>

using namespace std;

int main() {

    int A, B;
    cin >> A >> B;
    
    int ans = -1;
    
    int Box[4];
    for (int i = 1; i <= 3; i++) {
        Box[i] = 0;
    }
    
    Box[A] = A;
    Box[B] = B;
        
    for (int i = 1; i <= 3; i++) {
        if (Box[i] == 0) {
            if (ans != -1) {
                ans = -1;
            } else {
                ans = i;
            }
        }
    }
    
    cout << ans << endl;

    return 0;
}