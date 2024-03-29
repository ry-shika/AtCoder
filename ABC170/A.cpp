#include<bits/stdc++.h>

using namespace std;

int main() {

    int x[6];

    for (int i = 1; i <= 5; i++) {
        cin >> x[i];
    }

    for(int i = 1; i <= 5; i++) {
        if(x[i] == 0) {
            cout << i << endl;
        }
    }

    return 0;
}