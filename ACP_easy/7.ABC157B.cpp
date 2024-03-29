#include<bits/stdc++.h>

using namespace std;

int main() {

    int A[3][3]; 
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> A[i][j];
        }
    }

    int N;
    cin >> N;

    int b[N];
    for (int k = 0; k < N; k++) {
        cin >> b[k];
    }

    bool bingo[3][3];

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            bingo[i][j] = false;

            for (int k = 0; k < N; k++) {

                if (A[i][j] == b[k]) {

                    bingo[i][j] = true;
                }    
            }
        }
    }


    for (int i = 0; i < 3; i++) {
        if(bingo[i][0] and bingo[i][1] and bingo[i][2] == true) {
            cout << "Yes" << endl;
            return 0;
        }
    }

    for (int i = 0; i < 3; i++) {
        if(bingo[0][i] and bingo[1][i] and bingo[2][i] == true) {
            cout << "Yes" << endl;
            return 0;
        }
    }

    if(bingo[0][0] and bingo[1][1] and bingo[2][2] == true) {
        cout << "Yes" << endl;
        return 0;
    }

    if(bingo[0][2] and bingo[1][1] and bingo[2][0] == true) {
        cout << "Yes" << endl;
        return 0;
    }

    cout << "No" << endl;

    return 0;
}