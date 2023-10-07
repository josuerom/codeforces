#include <iostream>

using namespace std;

int main() {
   int tt;
   cin >> tt;
   while (tt--) {
      int n, ans; cin >> n;
      if (n == 1) ans = -1;
      else if (n == 2) ans = 7;
      else if (n == 3) ans = 10;
      else ans = (n % 2 == 0) ? (n * n) / 2 + (n - 1) : (n * n) / 2 + n;
      cout << ans << endl;
   }
   return 0;
}