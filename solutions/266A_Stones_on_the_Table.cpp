/**
 *  author:  josuerom
 *  created: 11/04/23 22:01:29
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
   ios::sync_with_stdio(false);
   cin.tie(0);
#ifndef ONLINE_JUDGE
   freopen("sample/inp.in", "r", stdin);
   //freopen("sample/out.ans", "w", stdout);
#endif
   short n, ans = 0;
   string s;
   cin >> n >> s;
   for (int i = 0; i < n-1; i++) if (s[i]==s[i+1]) ans++;
   cout << ans << '\n';
   return 0;
}