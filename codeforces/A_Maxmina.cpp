#include <iostream>
using namespace std;

int t, n, k;

void solve() {
   cin >> n >> k;
   int arr[n];
   for (int &e : arr) cin >> e;
   for (int i = 0; i < n; i++) {
      if (arr[i] == 1) {
         cout << "YES\n";
         return;
      }
   }
   cout << "NO\n";
}

int main() {
   cin >> t;
   while (t--) solve();
   return 0;
}