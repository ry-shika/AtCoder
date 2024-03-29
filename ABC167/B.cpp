#include<bits/stdc++.h>

using namespace std;

int main() {

    int A, B, C, K;
    cin >> A >> B >> C >> K;

    int ans = 0;
    int number = K;

    if(number > 0) {
        if(number >= A) {
            ans = A;
            number = number - A;
        }else {
            ans = number;
            cout << ans << endl;
            return 0;
        }
    }

    if(number > 0) {
        if(number >= B) {
            number = number - B;
        }else {
            cout << ans << endl;
            return 0;
        }
    }

    if(number > 0) {
        ans = ans - number;
    }

    cout << ans << endl;

    return 0;
}