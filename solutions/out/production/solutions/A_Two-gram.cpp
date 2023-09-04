/**
 *   author:  josuerom
 *   created: 23/08/23 23:51:02
**/
#include <bits/stdc++.h>
using namespace std;

#ifdef josuerom
#include "debug.h"
#else
#define debug(...) 42
#endif

#define rall(x) (x).rbegin(),(x).rend()
#define all(x)  (x).begin(),(x).end()
#define ull     unsigned long long int
#define ll      long long int
#define mp      make_pair
#define se      second
#define fi      first
#define br      '\n'

int n;
string s;

void solve() {
   cin >> n >> s;
   if (n == 2) {
      cout << s << endl;
      return;
   }
   string ans = "";
   int cnt = 1, mx = 0;
   bool flag = 0;
   for (int i = 1; i < n; i++) {
      if (s[i - 1] == s[i])
         cnt++;
      else {
         if (cnt > mx) {
            mx = cnt;
            ans = s[i];
            flag = (cnt >= 3) ? 1 : 0;
         }
         cnt = 1;
      }
   }
   cout << (flag ? (ans + ans) : s.substr(0, 2)) << '\n';
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr); cout.tie(nullptr);
   int tt = 1;
   // cin >> tt;
   for (int nc = 1; nc <= tt; nc++) {
#ifdef josuerom
      cout << "------ Case #" << nc << " ------\n";
      solve();
#else
      solve();
#endif
   }
   return 0;
}