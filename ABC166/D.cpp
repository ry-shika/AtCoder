#include<bits/stdc++.h>

using namespace std;

int main() {

    int X;
    cin >> X;

    int A = 0, B = 0;

    for(int i = 0; i < 1000; i++) {
        for(int j = 1; j < 1000; j++) {
            int a = pow(i, 5);
            int b = pow(j, 5);

            if(a - b == X) {
                A = i;
                B = j;
                break;
            }

            if(a + b == X) {
                A = i;
                B = -j;
                break;
            }
        }
    }

    cout << A << " " << B << endl;

    return 0;
}