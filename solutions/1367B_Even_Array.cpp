/**
 *   author:  josuerom
 *   created: 07/05/23 22:50:24
**/
#pragma GCC optimize("03,unroll-loops")
#pragma GCC target("avx2")

#include <bits/stdc++.h>
using namespace std;

#ifdef josuerom
   #include "data/debug.h"
#endif

int main() {
   ios::sync_with_stdio(false);
   cin.tie(0);
   int tt;
   cin >> tt;
   while (tt--) {
      int n;
      cin >> n;
      vector<int> a(n);
      bool flag = 1;
      int good = 0, bad = 0;
      for (int i = 0; i < n; i++) {
         cin >> a[i];
         if (i%2 != a[i]%2) { flag = 0; bad++; }
         else good++;
      }
      debug(bad, good);
      cout << (!flag && n==1 ? -1 : !flag ? abs(bad-good) : 0) << '\n';
   }
}
