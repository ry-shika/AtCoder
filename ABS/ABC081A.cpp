#include<bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    int ans = 0;
    int i = 0;
    while (i < 3) {
        if (s[i] == '1'){
            ans = ans + 1;
        }
        i = i + 1;
    }
    cout << ans << endl;
    return 0;
}






//int main(){
//   string s;
//    cin >> s;
//    int ans = 0;
//   for(int i = 0; i < 3; i++) {
//        if (s[i]=='1'){
//            ans++;
//        }
//    }
//    cout << ans << endl;
//    return 0;
//}