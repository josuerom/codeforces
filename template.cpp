/****************************************************
* @author:                josuerom                  *
* @date:               $1/11/22 $2               *
* @institute: Minute Of God University Of Colombia  *
****************************************************/
//$3#pragma GCC optimize("03,unroll-loops")
#include <bits/stdc++.h>

#define readArray(vec) void template<typename T> void read(vector<T>&(vec)){int n=(vec).size();for(auto&e:vec) cin >> e;}
#define TESTING #ifndef ONLINE_JUDGE freopen("test/inp.in", "r", stdin); freopen("test/out.ans", "w", stdout); #endif
#define SPEED_IO ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr); cerr.tie(nullptr);
#define PROGRAM_TIME cerr << "finished in " << (int)clock()/(CLOCKS_PER_SEC/100) << " ms\n"
#define decimals(n) cout.setf(ios::fixed, ios::floatfield); cout.precision(n+1);
#define binarySearch(vec, key) sort(all(vec)); binary_search(all(vec), key);
#define VEREDICT(condition) cout << ((condition) ? "YES\n" : "NO\n") << endl
#define forr(i, vec) for(int i = (int)(vec).size()-1; i >= 0; i--)
#define mod(a, b, mod) ((((a) % (mod)) + ((b) % (mod))) % (mod))
#define fori(i, b, c) for(int (i) = (b); (i) < (c); (i)++)
#define rall(vec) (vec).rbegin(), (vec).rend()
#define TEST_CASE(tc) cin >> (tc); while((tc)--) { solve(); }
#define all(vec) (vec).begin(), (vec).end()
#define fore(e, vec) for (auto &(e): (vec))
#define isOrdered(vec) is_sorted(all(vec))
#define rsort(vec) short(rall(vec))
#define sz(vec) (int)(vec).size()
#define sort(vec) sort(all(vec))
#define mcd(a, b) gcd(a, b)
#define FINISH return 0
#define endl '\n'

#define bigint __int128_t
#define ull unsigned long long int
#define ll long long
#define ui unsigned int
#define us unsigned short
#define uc unsigned char
#define ld long double
using namespace std;

const ll MAX = 1e9;
const ui MIN = 1e4;
const ui MOD = 1000000007;
const ld PI = 3.1415926535897932384626433832795;

ll t, n, m, c, i, j, ans$4;
//ll M[MAX][MAX], A[MIN];

void solve() {
   $5
}

int main() {
   SPEED_IO;
   TEST_CASE(t);
   //PROGRAM_TIME;
   FINISH;
}
