#include<bits/stdc++.h>

using namespace std;

int main() {

    string S;
    cin >> S;

    int A = S[0] - '0'; 
    int B = S[1] - '0'; 
    int C = S[2] - '0'; 
    int D = S[3] - '0'; 

    if(A + B + C + D == 7) {
        cout << A << "+" << B << "+" << C << "+" << D << "=" << 7 << endl;
        return 0;
    }

    if(A + B + C - D == 7) {
        cout << A << "+" << B << "+" << C << "-" << D << "=" << 7 << endl;
        return 0;
    }

    if(A + B - C + D == 7) {
        cout << A << "+" << B << "-" << C << "+" << D << "=" << 7 << endl;
        return 0;
    }    

    if(A + B - C - D == 7) {
        cout << A << "+" << B << "-" << C << "-" << D << "=" << 7 << endl;
       return 0;
    }

    if(A - B + C + D == 7) {
        cout << A << "-" << B << "+" << C << "+" << D << "=" << 7 << endl;
        return 0;
    }

    if(A - B + C - D == 7) {
        cout << A << "-" << B << "+" << C << "-" << D << "=" << 7 << endl;
       return 0;
    }

    if(A - B - C + D == 7) {
        cout << A << "-" << B << "-" << C << "+" << D << "=" << 7 << endl;
        return 0;
    }

    if(A - B - C - D == 7) {
        cout << A << "-" << B << "-" << C << "-" << D << "=" << 7 << endl;
        return 0;
    }    
}