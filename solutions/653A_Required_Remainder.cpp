/**
 *   author:  josuerom
 *   created: 05/06/23 22:46:41
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

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr); cout.tie(nullptr);
   int tt;
   cin >> tt;
   while (tt--) {
      int x, y, n;
      cin >> x >> y >> n;
      int a = n - n%x + y, b = n - n%x - abs(x-y);
      cout << (a%x == y ? a : b) << '\n';
   }
   return 0;
}