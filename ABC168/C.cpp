#include<bits/stdc++.h>

using namespace std;

#define PI 3.14159265358979323846 

int main() {

    double A, B, H, M;
    cin >> A >> B >> H >> M;

    double time = H * 60 + M;

    double length;

    double Long, Short;

    Long = M * 6;
    Short = 0.5 * time;

    double angle = abs(Long - Short);

    if (angle > 180) {
        angle = 360 - angle;
    }

    length = A * A + B * B - 2 * A * B * cos(PI * angle / 180);

    cout << fixed << setprecision(15) << sqrt(length) << endl;

    return 0;
    
}