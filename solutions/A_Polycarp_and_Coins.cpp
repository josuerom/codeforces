/**
 *   author:  josuerom
 *   created: 21/06/23 19:08:11
**/
#include <bits/stdc++.h>

using namespace std;

#ifdef josuerom
#include "debug.h"
#else
#define debug(...) 42
#endif

#define rall(x) (x).rbegin(),(x).rend()
#define all(x) (x).begin(),(x).end()
#define ull unsigned long long int
#define len(x) (int)(x).size()
#define ll long long int
#define pb push_back
#define mp make_pair
#define se second
#define fi first

void solve() {
   int n;
   cin >> n;
   if (n <= 3) cout << n << " 0\n";
   else if (n%3 == 0) cout << (n/3) << " " << (n/3) << '\n';
   else cout << (n/3) << " " << (n/3)+1 << '\n';
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr); cout.tie(nullptr);
   int tt;
   cin >> tt;
   while (tt--) solve();
   return 0;
}