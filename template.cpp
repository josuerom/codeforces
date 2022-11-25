/**************************************************
 * @author:               josuerom                *
 * @created:         14/11/22 13:28:51            *
**************************************************/
#pragma GCC optimize("03,unroll-loops")
#include <bits/stdc++.h>

#define readArray(vec) void template<typename T> void read(vector<T>&(vec)){int n=(vec).size();for(auto&e:vec) cin >> e;}
#define SPEED_IO ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr); cerr.tie(nullptr);
#define PROGRAM_TIME cout << "max time " << (int)clock()/(CLOCKS_PER_SEC/10) << " ms\n"
#define VEREDICT(condition) cout << ((condition) ? "YES\n" : "NO\n") << endl
#define decimals(n) cout.setf(ios::fixed, ios::floatfield); cout.precision(n+1);
#define binarySearch(vec, key) sort(all(vec)); binary_search(all(vec), (key));
#define forr(i, vec) for(int i = (int)(vec).size()-1; i >= 0; i--)
#define mod(a, b, mod) ((((a) % (mod)) + ((b) % (mod))) % (mod))
#define fori(i, b, c) for(int (i) = (b); (i) < (c); (i)++)
#define TEST_CASE(tc) cin >> (tc); while ((tc)--)
#define rall(vec) (vec).rbegin(), (vec).rend()
#define all(vec) (vec).begin(), (vec).end()
#define fore(e, vec) for (auto &(e): (vec))
#define isOrdered(vec) is_sorted(all(vec))
#define rsort(vec) short(rall(vec))
#define sz(vec) (int)(vec).size()
#define sort(vec) sort(all(vec))
#define mcd(a, b) gcd(a, b)
#define ull unsigned long long int
#define ll long long
#define ui unsigned int
#define endl '\n'
using namespace std;

void dbg_out() { cout << endl; }
template<typename Head, typename... Tail>
void dbg_out(Head H, Tail... T) { cout << ' ' << H; dbg_out(T...); }
#define dbg(...) cout << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

const ui MAX = 1e9;
const ui MIN = 1e4;
int tc, n, m, c=0, ans;

int main() {
   SPEED_IO;
   TEST_CASE(tc) {
      ${1:solution here!}
   }
   return 0;
}
