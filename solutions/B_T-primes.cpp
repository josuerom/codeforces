/**
 *   author:  josuerom
 *   created: 15/06/23 14:36:24
**/
#pragma GCC optimize("O3,unroll-loops")

#include <bits/stdc++.h>
using namespace std;

#ifdef josuerom
#include "debug.h"
#else
#define debug(...) 42
#endif

#define rall(x) (x).rbegin(), (x).rend()
#define all(x) (x).begin(), (x).end()
#define ull unsigned long long int
#define len(x) (int)(x).size()
#define ll long long int
#define pb push_back
#define mp make_pair
#define se second
#define fi first

const ll MAX = (ll) 1e12;

bool solve(ll t) {
   return 0;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr); cout.tie(nullptr);
   int n;
   cin >> n;
   for (int i = 1; i <= n; i++) {
      ll x; cin >> x;
      if (x < 4) cout << "NO\n";
      else cout << (solve(x) ? "YES" : "NO") << '\n';
   }
   return 0;
}
