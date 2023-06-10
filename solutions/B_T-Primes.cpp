/**
 *   author:  josuerom
 *   created: 09/06/23 01:50:56
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
#define ss second
#define ff first

void solve(ll t) {
   ll MAX = (ll) 1e5, cnt = 0;
   for (ll i = 2; i <= MAX; i++) {
      if (t % i == 0) cnt++;
      if (cnt == 2 || i == (t-1)) break;
   }
   cout << (cnt==1 ? "YES" : "NO") << '\n';
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr); cout.tie(nullptr);
   int n;
   cin >> n;
   for (int i = 0; i < n; i++) {
      ll x;
      cin >> x;
      if (x > 3) solve(x);
      else cout << "NO\n";
   }
   return 0;
}