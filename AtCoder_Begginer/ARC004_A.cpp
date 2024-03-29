#include<bits/stdc++.h>

using namespace std;

double pow(double x) {
    return x * x;
}

double distance(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x1 - x2) + pow(y1 - y2));
}

int main() {

    int N;
    cin >> N;

    int x[N];
    int y[N];

    for (int i = 0; i < N; i++) {
        cin >> x[i] >> y[i];
    }

    double ans = 0;

    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            double temp_distance = distance(x[i], y[i], x[j], y[j]);
            if (ans < temp_distance) {
                ans = temp_distance;
            }
        }
    }

    cout << ans << endl;

    return 0;
}