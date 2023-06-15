/**
 *   author:  josuerom
 *   created: 14/06/23 13:22:05
**/
#pragma GCC optimize("O3,unroll-loops")

#include <bits/stdc++.h>
using namespace std;

#define rall(x) (x).rbegin(),(x).rend()
#define all(x) (x).begin(),(x).end()
#define ull unsigned long long int
#define len(x) (int) (x).size()
#define ll long long int
#define pb push_back
#define mp make_pair
#define se second
#define fi first

// const int MAX = 300, N = 490002;
const int MAX = 100, N = 90002;
ll a[MAX + 2], b[N + 2];

void cribaEratostenes() {
   bool primes[MAX + 2];
   memset(primes, true, sizeof(primes));
   primes[0] = primes[1] = false;
   for (ll p = 2, j = 0; j != MAX; p++) {
      if (primes[p]) {
         a[j++] = p;
         for (ll i = p*p; i <= N; i += p) {
            primes[i] = false;
         }
      }
   }
}

bool solve(ll t) {
   // ll b[N];
   memset(b, 0, sizeof(b));
   while (t != 1) {
      for (ll i = 0; i < N; i++) {
         if (t % a[i] == 0) {
            b[a[i]] += 1;
            t /= a[i];
            break;
         }
      }
   }
   sort(b, b+N);
   cout << binary_search(b, b+N, 2) << '\n';
   return binary_search(b, b+N, 2);
}

void printContentArrays() {
   for (int i = 0; i < MAX; i++) {
      cout << a[i] << " ";
   }
   cout << "\n---------------\n";
   for (int i = 0; i < MAX; i++) {
      cout << b[i] << " ";
   }
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr); cout.tie(nullptr);
   memset(a, 0, sizeof(a));
   cribaEratostenes();
   int n;
   cin >> n;
   for (int i = 1; i <= n; i++) {
      ll x; cin >> x;
      if (x > 3) {
         printContentArrays();
         // cout << (solve(x) ? "YES" : "NO") << '\n';
      } else cout << "NO\n";
   }
   return 0;
}