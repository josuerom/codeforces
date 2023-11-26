/**
 *   author:  josuerom
 *   created: 07/10/23 10:55:21
**/
#include <bits/stdc++.h>

using namespace std;

void solve() {
   long long n;
   cin >> n;
   cout << (n % 2 == 0 ? (n * n) / 2 + (n - 1) : (n * n) / 2 + n) << '\n';
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(0);
   int tt;
   cin >> tt;
   while (tt--) {
      solve();
   }
   return 0;
}