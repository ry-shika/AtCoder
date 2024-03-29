#include<bits/stdc++.h>

using namespace std;

int main() {

    int a, b;
    cin >> a >> b;

    int c = 0;
    int d = b;

    while(d != 0) {
        d = d / 10;
        c++;
    }

    for (int i = 1; i <= c; i++) {
        a = a * 10;
    }

    int number = a + b;

    bool ans = false;

    for (int i = 1 ; i <= 400; i++) {
        if (i * i == number) {
            ans = true;
            break;
        }

        if (i * i >= number) {
            break;
        }
    }

    cout << (ans ? "Yes" : "No") << endl;


    return 0;
}