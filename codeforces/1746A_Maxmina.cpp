/** @author josuerom */
#include <iostream>
#include <numeric>
using namespace std;

int main() {
   ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
   short t, n, k;
   bool existe=false;
   cin >> t;
   while (t--) {
      cin >> n >> k;
      short arr[n];
      for (auto &e : arr) cin >> e;
      if (k>2) cout << (arr[k-1]==1 ? "YES\n" : "NO\n");
      else cout << (arr[0]==1||arr[1]==1 ? "YES\n" : "NO\n");
   }
   return 0;
}