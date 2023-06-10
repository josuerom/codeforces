/**
 *   author:  josuerom
 *   created: 09/06/23 18:50:41
**/
#pragma GCC optimize("O3,unroll-loops")

#include <bits/stdc++.h>
using namespace std;

#ifdef josuerom
   #include "debug.h"
#endif

#define rall(x) (x).rbegin(),(x).rend()
#define all(x) (x).begin(),(x).end()
#define ull unsigned long long int
#define len(x) (int) (x).size()
#define ll long long int
#define pb push_back
#define mp make_pair
#define se second
#define fi first

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr); cout.tie(nullptr);
   int tt;
   cin >> tt;
   while (tt--) {
      int n, ans = 1;
      cin >> n;
      ans = max(ans, gcd(n-1, n));
      cout << ans << '\n';
   }
   return 0;
}