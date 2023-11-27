/**
 *   author:  josuerom
 *   created: 14/10/23 21:34:09
**/
#include <bits/stdc++.h>
using namespace std;

#ifdef DEBUG
#include "debug.h"
#else
#define debug(...) 42
#endif

#define ll  long long
#define pb  push_back
#define br  '\n'

string s;

void solve() {
   cin >> s;
   if (s == "abc" || s == "acb" || s == "bac" || s == "cba")
      cout << "Yes\n";
   else
      cout << "No\n";
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(0);
   int tt = 1;
   cin >> tt;
   for (int nc = 1; nc <= tt; nc++) {
#ifdef LOCAL
      cout << "-- Case #" << nc << " --\n";
      solve();
#else
      solve();
#endif
   }
   return 0;
}