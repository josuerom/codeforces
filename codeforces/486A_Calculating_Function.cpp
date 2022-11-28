/**************************************************
 * @author:               josuerom                *
 * @created:         27/11/22 16:00:21            *
**************************************************/
#include <bits/stdc++.h>

#define VEREDICT(a) cout << ((a) ? "YES" : "NO") << endl
#define TESTCASE(tt) cin >> (tt); while ((tt)--)
#define all(vec) vec.begin(), vec.end()
#define rall(vec) vec.rbegin(), vec.rend()
#define sz(vec) (int) vec.size()
#define ll long long
#define endl '\n'

using namespace std;
void dbg_out() { cout << endl; }
template<typename Head, typename... Tail>
void dbg_out(Head H, Tail... T) { cout << ' ' << H; dbg_out(T...); }
#define dbg(...) cout << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

int main() {
   ios::sync_with_stdio(false); cin.tie(0);
   ll n, ans; cin >> n;
   if (n%2==0) ans = (n+1)/2;
   else ans = (-1 * (n+1))/2;
   cout << ans << endl;
   return 0;
}