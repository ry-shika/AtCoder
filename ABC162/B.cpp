#include<bits/stdc++.h>

using namespace std;

int main() {

    int N;
    cin >> N; 

    vector<int> members;

    for (int i = 1; i <= N; i++) {
        if (i % 3 != 0) {
            if (i % 5 != 0){
                members.push_back(i);
            }
        }
    }

    cout << accumulate(members.begin(), members.end(), 0LL) << endl;

    return 0;
}