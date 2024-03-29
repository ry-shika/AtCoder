#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {

    string S;
    cin >> S;

    vector<ll> members; //項

    int length = S.length();

    for (int bit = 0; bit < (1 << length - 1); bit++)  {
        int current_index = 0;
        
        for (int i = 0; i < length - 1; i++) {
            if (bit & 1 << i) {
                int previous_index = current_index;
                current_index = i + 1;
                members.push_back(stoll(S.substr(previous_index, current_index - previous_index)));
            }             
        }

    members.push_back(stoll(S.substr(current_index, S.length() - current_index)));
    }

    cout << accumulate(members.begin(), members.end(), 0LL) << endl;

    return 0;
}

