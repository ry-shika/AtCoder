#include<bits/stdc++.h>

using namespace std;

int main() {
    int N;
    cin >> N;
    int i;

    int a[N];
    for (i = 0; i < N; i++) {
        cin >> a[i];
    }

   sort(a, a + N, greater<int>());

   int Alice = 0, Bob = 0;

   for (i = 0; i < N; i++) {
       if (i % 2 == 0) {
           Alice += a[i];
       } else {
           Bob += a[i];
       }
   }

   cout << Alice - Bob << endl;

    return 0;
}