/**
 *   █▀█  █▀▀▄ ─▀─ ▀▀█▀▀ █▀▀ ▄▀ ▀▄
 *   ─▄▀  █▀▀▄ ▀█▀ ──█── ▀▀█ █─ ─█
 *   █▄▄  ▀▀▀─ ▀▀▀ ──▀── ▀▀▀ ▀▄ ▄▀
**/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define br '\n'

class RPCProblemSolver {
public:
   static const int N = 1e3 + 10;
   int a[N], n;

   void Solution() {
   }

   void TestCase() {
      int tt = 1, nc = 1;
      cin >> tt;
      while (tt--) {
      #ifdef LOCAL
         cout << "Case #" << n++c << ":\n";
         Solution();
      #else
         Solution();
      #endif
      }
   }
};

int main() {
   ios::sync_with_stdio(false);
   cin.tie(0);
   RPCProblemSolver sol;
   sol.TestCase();
   // sol.Solution();
   return 0;
}
