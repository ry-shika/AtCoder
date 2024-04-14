#include<bits/stdc++.h>

using namespace std;

int main() {

    string S;
    cin >> S;

    int len;
    len = S.length();

    int a[501];
    int b[100001];
    
    for (int i = 0; i < len; i++) {
        a[S[i]]++;
    }

    for (int i = 'a'; i <= 'z'; i++) {
        b[a[i]]++;
    }

    for (int i = 1; i <= 1000; i++) {
        if (b[i] != 0 && b[i] != 2) {
            cout << "No" << endl;
            
            return 0;
        }
    }

    cout << "Yes" << endl;

    return 0;

}