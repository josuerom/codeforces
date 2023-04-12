/**
 *  author:  josuerom
 *  created: 11/04/23 22:07:31
**/
#pragma GCC optimize("03,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")

#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL
   #include "data/debug.h"
#else
   #define debug(...) 42
#endif

int main() {
#ifndef ONLINE_JUDGE
   //freopen("sample/input.in", "r", stdin);
   //freopen("sample/out.ans", "w", stdout);
#endif
   ios::sync_with_stdio(false);
   cin.tie(0);
   int a, b, ans = 0;
   cin >> a >> b;
   while (true) {
      if (a>b) break;
      a *= 3; b *= 2;
      ans++;
   }
   cout << (ans==0 ? 1 : ans) << '\n';
   return 0;
}