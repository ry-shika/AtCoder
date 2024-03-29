#include<bits/stdc++.h>

using namespace std;

int main() {

    int x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    double a = x2 - x1;
    double b = y2 - y1;
    double c = x3 - x1;
    double d = y3 - y1;

    double ans = abs(a * d - b * c) / 2.0;

    cout << fixed << ans << endl;
    
    return 0;
}