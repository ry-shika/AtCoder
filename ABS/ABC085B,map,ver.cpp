#include<bits/stdc++.h>

using namespace std;

int main() {
    int N;
    cin >> N;

    //map<kyeの型, valueの型>
    //map<String, int> a;
    map<int, int> mochi_map;

    for(int i = 1; i <= N; i++) {
        int d;
        cin >> d;

        //初めての持ちの長さならmapに新規作成
        //そうでないのなら既存の配列部に++する
        if(mochi_map.count(d) == 0) {
            mochi_map.insert(make_pair(d, 1));
        } else {
            mochi_map[d]++;
        }
    }

    cout << mochi_map.size() << endl;

    return 0;
}