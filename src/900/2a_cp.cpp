#include <bits/stdc++.h>
using namespace std;

#define ll  long long
#define br  '\n'

const int N = 10 + 1e1;

void solve() {
   int n, k;
   cin >> n >> k;
   int x = (n + 1) / 2;
   if (k <= x)
      cout << k * 2 - 1 << br;
   else
      cout << (k - x) * 2;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(0);
   int tt = 1;
   // cin >> tt;
   while (tt--) solve();
   return 0;
}
