/**
 *   author:  josuerom
<<<<<<< HEAD
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
=======
 *   created: 13/05/23 12:40:05
**/
#pragma GCC optimize("03,unroll-loops")
#pragma GCC target("avx2")

#include <bits/stdc++.h>
using namespace std;

#ifdef josuerom
   #include "debug.h"
#endif

#define all(x) (x).begin(),(x).end()
#define len(x) (int) (x).size()
>>>>>>> 9684e8e (Update files)
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
<<<<<<< HEAD
      vector<int> vec(n);
      int ans = 0;
      for (auto &e : vec) cin >> e;
      for (int i = 0; i < n; i++) {
         if (i%2 != vec[i]%2) ans++;
      }
      cout << (ans==0 ? -1 : ans) << '\n';
=======
      vector<int> a(n);
      bool flag = 1;
      int good = 0, bad = 0;
      for (int i = 0; i < n; i++) {
         int x;
         cin >> x;
         a.pb(x);
         if (i%2 != x%2) { flag = 0; bad++; }
         else good++;
      }
      debug(bad, good);
      cout << (!flag && n==1 ? -1 : !flag ? abs(bad-good) : 0) << '\n';
>>>>>>> 9684e8e (Update files)
   }
   return 0;
}