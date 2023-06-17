/**
 *   author:  josuerom
 *   created: 05/06/23 22:46:41
**/
#pragma GCC optimize("O3,unroll-loops")

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
#define len(x) (int) (x).size()
#define ll long long int
#define pb push_back
#define mp make_pair
#define ss second
#define ff first

void solve(int x, int y, int n) {
   int a = n - n%x + y, c = n - n%x - abs(x-y);
   if (a <= 0 || c <= 0) cout << max(a, c) << '\n';
   else {
      int b = min(a, c);
      a = max(a, c);
      cout << "max: "<<a <<" min: "<<b<< '\n';
   }
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr); cout.tie(nullptr);
   int tt;
   cin >> tt;
   while (tt--) {
      int x, y, n;
      cin >> x >> y >> n;
      solve(x, y, n);
   }
   return 0;
}