/**
 *  author:  josuerom
 *  created: 14/11/22 13:28:51
**/
#pragma GCC optimize("03,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")

#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL
#include "../data/debug.h"
#else
#define debug(...) 42
#endif

#define readArray(vec) void template<typename T> void read(vector<T>&(vec)){int n=(vec).size();for(auto&e:vec) cin >> e;}
#define SPEED_IO ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr); cerr.tie(nullptr);
#define PROGRAM_TIME cout << "max time " << (int)clock()/(CLOCKS_PER_SEC/10) << " ms\n";
#define decimals(n) cout.setf(ios::fixed, ios::floatfield); cout.precision(n+1);
#define binarySearch(vec, key) sort(all(vec)); binary_search(all(vec), (key));
#define VEREDICT(condition) cout << ((condition) ? "YES" : "NO") << endl;
#define forr(i, vec) for(int i = (int)(vec).size()-1; i >= 0; i--)
#define mod(a, b, mod) ((((a) % (mod)) + ((b) % (mod))) % (mod))
#define fori(i, b, c) for(int (i) = (b); (i) < (c); (i)++)
#define rall(vec) (vec).rbegin(), (vec).rend()
#define all(vec) (vec).begin(), (vec).end()
#define fore(e, vec) for (auto &(e): (vec))
#define isOrdered(vec) is_sorted(all(vec))
#define TC(tt) cin >> (tt); while ((tt)--)
#define rsort(vec) short(rall(vec))
#define ull unsigned long long int
#define sort(vec) sort(all(vec))
#define sz(vec) (int) vec.size()
#define mcd(a, b) gcd(a, b)
#define END return 0
#define ll long long
#define endl '\n'

const ui MAX = 1e9;
int tt, ans;

int main() {
   SPEED_IO;
   TC(tt) {
      $1
   }
   END;
}
