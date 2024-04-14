#include<bits/stdc++.h>

using namespace std;

int main() {

    string S, T;
    cin >> S >> T;

    long long len = S.size();
    int index = 0;


    // Tを小文字に変更
    transform(T.begin(), T.end(), T.begin(), ::tolower);

    for (long long i = 0; i < len; i++) {
        if (S[i]  == T[index]) {
            index++;

            if ((index == 2 && T[2] == 'x') || index == 3) {
                cout << "Yes"  << endl;
                return 0;
            }
        }
    }
    
    cout << "No" << endl;

    return 0;
}