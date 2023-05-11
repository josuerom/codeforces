/**
 *   author:  josuerom
 *   created: 07/05/23 22:50:24
**/
#pragma GCC optimize("03,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")

#include <bits/stdc++.h>

using namespace std;

#ifdef josuerom
   #include "data/debug.h"
#endif

#define all(a) (a).begin(),(a).end()
#define len(a) (int) (a).size()
#define ll long long
#define pb push_back
#define mp make_pair
#define ss second
#define ff first

int main() {
   ios::sync_with_stdio(false);
   cin.tie(0);
   int tt;
   cin >> tt;
   while (tt--) {
      int n;
      cin >> n;
      vector<int> vec(n);
      int ans = 0;
      for (auto &e : vec) cin >> e;
      for (int i = 0; i < n; i++) {
         if (i%2 != vec[i]%2) ans++;
      }
      cout << (ans==0 ? -1 : ans) << '\n';
   }
   return 0;
}