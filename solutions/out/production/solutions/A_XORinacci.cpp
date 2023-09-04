/**
 *   author:  josuerom
 *   created: 31/08/23 15:36:55
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

int a, b, n;

int f(int a, int b, int n) {
   if (n == 0) return a;
   else if (n == 1) return b;
   else {
      int fib[3] = {a, b, 0};
      for (int i = 2; i <= n; ++i) {
         fib[i % 3] = fib[(i - 1) % 3] ^ fib[(i - 2) % 3];
      }
      return fib[n % 3];
   }
}

void solve() {
   cin >> a >> b >> n;
   cout << f(a, b, n) << endl;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr); cout.tie(nullptr);
   int tt = 1;
   cin >> tt;
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