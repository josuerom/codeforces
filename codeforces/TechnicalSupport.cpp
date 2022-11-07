#include <iostream>
#include <string>

using namespace std;

void solve() {
   int n, k=0, A=0, Q=0;
   cin >> n;
   string ms;
   cin >> ms;
   bool none = false;
   if (n == 1 || ms[0] == 'A' || ms[n-1] == 'Q') cout << "No\n";
   else {
      for (int i = 0; i < n; i++) {
         if (ms[i] == 'Q') Q++;
         else A++;
      }
      if (A==Q) {
         int j=0, l=n-1;
         for (j = l; j >= 0; j--) {
            salto: if (ms[j] == 'A') A++;
            else break;
         }
         for (l = j; l >= 0; l--) {
            if (ms[l] == 'Q') Q++;
            else break;
         }
         if (A==Q) {
            A=0; Q=0;
            goto salto;
         } else if (A>Q) cout << "Yes\n";
         else cout << "No\n";
      } else if (A>Q) {
         cout << "Yes\n";
      } else {
         cout << "No\n";
      }
   }
}

int main() {
   ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
   #ifndef ONLINE_JUDGE
      freopen("TEST/input.txt", "r", stdin);
      freopen("TEST/output.txt", "w", stdout);
   #endif
   int t;
   cin >> t;
   while (t--) solve();
   return 0;
}