#include<bits/stdc++.h>

using namespace std;

int main() {

    int N;
    cin >> N;

    vector<pair<int, int>> tasks;

    for(int i = 1; i <= N; i++) {
        int A, B;
        cin >> A >> B;
        tasks.emplace_back(B, A);
    }

    sort(tasks.begin(), tasks.end());

    int sum = 0;

    bool ans = true;

    for(auto v : tasks) {
        sum += v.second;

        if(sum > v.first) {
            ans = false;
            break;
        }
    }

    cout << (ans ? "Yes" : "No") << endl;

    return 0;
}