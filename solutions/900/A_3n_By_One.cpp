/**
 *   author:  josuerom
 *   created: 23/09/23 19:07:06
**/
#include <iostream>
#include <algorithm>
using namespace std;

const int N = 1e5 + 7;
int a, b, ans;
int dp[N];

void solve(int i, int j) {
   ans = 0;
   for (int k = j; k >= i; k--) {
      if (dp[k] != 0) {
         ans = max(ans, dp[k]);
         continue;
      }
      a = k; b = 0;
      if (a == 1)
         b = 3;
      while (a > 1) {
         if (a % 2 == 0)
            a /= 2;
         else
            a = a * 3 + 1;
         b++;
      }
      dp[k] = b;
      ans = max(ans, b);
   }
   cout << i << " " << j << " " << ans + 1 << endl;
}

void arrayDP() {
   cout << "--- content dp[] ---" << endl;
   for (int i = 1; i <= N - 6; i++)
      cout << dp[i] << " ";
   cout << endl;
}

int main() {
#ifdef josuerom
   freopen("/samples/in1.txt", "r", stdin);
   freopen("/samples/output.txt", "w", stdout);
#endif
   int i = 0, j = 0;
   while (cin >> i >> j) {
      solve(i, j);
   }
   // arrayDP();
   return 0;
}