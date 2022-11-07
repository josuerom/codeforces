/******************************************
* @AUTHOR:            JOSUEROM            *
* @UNIVERSITY: MINUTE OF GOD OF COLOMBIA  *
******************************************/
#pragma GCC optimize("03,unroll-loops")
#include <bits/stdc++.h>

#define speed ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr); cerr.tie(nullptr);
#define all(vec) (vec).begin(), (vec).end()
#define rall(vec) (vec).rbegin(), (vec).rend()
#define only_decimals(n) cout.setf(ios::fixed, ios::floatfield); cout.precision(n);
#define sort(vec) sort(all(vec))
#define rsort(vec) short(rall(vec))
#define fori(a, b, c) for(int (a) = (b); (a)<(c); (a)++)
#define fore(e, vec) for (auto &(e): (vec))
#define forr(i, vec) for(int i = (int)(vec).size()-1; i >= 0; i--)
#define length(vec) (int)((vec).size())
#define module(a, b, mod) ((((a) % (mod)) + ((b) % (mod))) % (mod))
#define binary_search(vec, key) sort(all(vec)); binary_search(all(vec), key);
#define mcd(a, b) gcd(a, b)
#define is_ordered(vec) is_heap(all(vec))
#define read_array(vec) void template<typename T> void read(vector<T>& (vec)) { int n=(vec).size(); for(auto &e : (vec)) cin >> e; }
#define program_time cerr << "finished in " << (float)clock() / (CLOCKS_PER_SEC/1000) << " ms\n"
#define veredict(condition) cout << ((condition) ? "YES\n" : "NO\n") << ln
#define online_jugde #ifndef ONLINE_JUDGE freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout); #endif
#define test_cases(t) while((t)--) solve();
#define ln "\n"

#define MAX (ll) 1e9
#define MIN (ll) 1e4
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007

using namespace std;
typedef unsigned long long int ull; //18^19
typedef long long ll; //9^18
typedef unsigned int ui; //4^9
typedef unsigned short us; //65^3

ll n, m, t, k, c;
//ll m[MAX][MAX], a[MIN];

void solve() {
   // solution here
}

int main() {
   speed;
   online_jugde;
   scanf("%d", &t);
   test_cases(t);
   return 0;
}
