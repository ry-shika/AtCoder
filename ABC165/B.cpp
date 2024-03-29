#include<bits/stdc++.h>

using namespace std;

int main() {
 
    long long X;
    cin >> X;
 
    double i = 100;
 
    int ans = 0;
 
    while(i < X) {
        i = floor(i * 1.01);
        ans++;
    }
 
    cout << ans << endl;
 
    return 0;
}