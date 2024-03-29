#include<bits/stdc++.h>

using namespace std;

int main() {

    int N;
    cin >> N;
 
    int x[110], y[110];
    int ans = 0;
    int MAX = 0;

    for (int i = 0; i < N; i++) {
        cin >> x[i] >> y[i];
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {

            int MAX = (x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]);
            
            if (ans < MAX) {
                ans = MAX;
            }
        }
    }

    cout << sqrt(ans) << endl;

    return 0;
}