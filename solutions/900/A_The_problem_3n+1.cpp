/**
 *   author:  josuerom
 *   created: 23/09/23 19:07:06
**/
#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 1;
int dp[N], a, b, t, ans;

void solve(int &i, int &j) {
   cout << i <<" "<< j << " ";
   t = max(i, j);
   a = min(i, j);
   b = t;
   ans = 0;
   for (int k = b; k >= a; k--) {
      int c = 1, n = k;
      while (n != 1) {
         if (n % 2 == 0) n /= 2;
         else n = n * 3 + 1;
         c++;
      }
      ans = max(ans, c);
   }
   cout << ans << '\n';
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(0);
#ifdef LOCAL
   freopen("samples/in1", "r", stdin);
   freopen("samples/output", "w", stdout);
#endif
   int i = 0, j = 0;
   while (cin >> i >> j) {
      solve(i, j);
   }
   return 0;
}
