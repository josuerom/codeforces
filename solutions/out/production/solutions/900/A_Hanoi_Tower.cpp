/**
 *   author:  josuerom
 *   created: 07/10/23 10:55:21
**/
#include <iostream>

using namespace std;

void solve() {
   long long n = 0, ans = 0;
   cin >> n;
   if (n == 1) ans = 4;
   else if (n == 2) ans = 7;
   else if (n == 3) ans = 10;
   else ans = (n % 2 == 0) ? (n * n) / 2 + (n - 1) : (n * n) / 2 + n;
   cout << ans << endl;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr); cout.tie(nullptr);
   freopen("./samples/in1", "r", stdin);
   //freopen("./samples/out.txt", "w", stdout);
   int tt;
   cin >> tt;
   while (tt--) {
      solve();
   }
   return 0;
}