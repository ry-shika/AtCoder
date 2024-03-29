#include<bits/stdc++.h>

using namespace std;

vector<string> words = {"dream", "dreamer", "erase", "eraser"};

int main() {

    string S;
    cin >> S;

    bool dp[1000000];
    dp[0] = true;

    for (int i = 0; i < S.length(); i++) {
        if (!dp[i]) continue;

        for (int w = 0; w < words.size(); w++) {
            int length = words[w].length();

            if (S.substr(i, length) == words[w]) {
                dp[i + length] = true;
            }
        }
    }

    cout << (dp[S.length()] ? "YES" : "NO") << endl;

    return 0;
}


// #include<bits/stdc++.h>

// using namespace std;

// int main() {

//     string S;
//     cin >> S;

//     string divide[4] = {"dream", "dreamer", "erase", "eraser"};

//     //後ろから解くために文字列を左右反転
//     reverse(S.begin(), S.end());
//     for (int i = 0; i < 4; i++) reverse(divide[i].begin(), divide[i].end());
    


    
//     return 0;
// }