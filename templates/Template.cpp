/**
 *   author:  josuerom
 *   created: 14/11/22 13:28:51
**/
#pragma GCC optimize("03,unroll-loops")
#pragma GCC target("avx2")

#include <bits/stdc++.h>
using namespace std;

#ifdef josuerom
   #include "debug.h"
#endif

#define readArray(vec) void template<typename T> void read(vector<T>&(vec)){int n=(vec).size();for(auto&e:vec) cin >> e;}
#define SPEED_IO() ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr); cerr.tie(nullptr);
#define decimals(n) cout.setf(ios::fixed, ios::floatfield); cout.precision(n);
#define binarySearch(vec, key) sort(all(vec)); binary_search(all(vec), (key));
#define VEREDICT(condition) cout << ((condition) ? "YES" : "NO") << '\n';
#define forr(i, vec) for(int i = (int)(vec).size()-1; i >= 0; i--)
#define mod(a, b, MOD) ((((a) % (MOD)) + ((b) % (MOD))) % (MOD))
#define fori(i, b, c) for(int (i) = (b); (i) < (c); (i)++)
#define rall(vec) (vec).rbegin(), (vec).rend()
#define all(vec) (vec).begin(), (vec).end()
#define fore(e, vec) for (auto &(e): (vec))
#define isOrdered(vec) is_sorted(all(vec))
#define TC int tt; cin >> tt; while (tt--)
#define rsort(vec) sort(rall(vec))
#define ull unsigned long long int
#define mcm(a, b) (a*b) / gcd(a,b)
#define mcd(a, b) (int) gcd(a,b)
#define sort(vec) sort(all(vec))
#define sz(vec) int(vec.size())
#define len(a) int(size((a)))
#define ll long long
#define pb push_back
#define mp make_pair
#define END return 0
#define se second
#define fi first
#define bl '\n'

clock_t startTime;
double getCurrentTime() {
   return (double)(clock() - startTime) / CLOCKS_PER_SEC;
}

constexpr int MAX = (int) 1e6+10;
int N;

int main() {
//   startTime = clock();
   SPEED_IO();
   TC {
<<<<<<< HEAD
      
=======
      $CURSOR$
>>>>>>> 9684e8e (Update files)
   }
//   printf("\ntime %.5lf\n", getCurrentTime());
   END;
}