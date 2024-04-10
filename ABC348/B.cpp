#include<bits/stdc++.h>

using namespace std;

int main() {

    int N;
    cin >> N;

    int X[N + 1], Y[N + 1];
    for (int i = 1; i <= N; i++) {
        cin >> X[i] >> Y[i];
    }

    for (int i = 1; i <= N; i++) {

        int max_dis = 0;
        int distance = 0;
        int number = 0;
        
        for (int j = 1; j <= N; j++) {
            distance = ((X[i] - X[j]) * (X[i] - X[j])) + ((Y[i] - Y[j]) * (Y[i] - Y[j]));

            // cout << "j: " << j << ", distance: " << distance << endl; 

            if (max_dis < distance) {
                max_dis = distance;
                number = j;
            }
        }

        cout << number << endl;
    }

    return 0;
}