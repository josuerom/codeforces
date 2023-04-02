/**
 *    author:  tourist
 *    created: 31.03.2023 11:29:33
**/
#include <bits/stdc++.h>

using namespace std;

#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

class segtree {
public:
   struct node {
      int mn = 0;
      int mx = 0;
      int add = 0;
      long long sum = 0;

      void apply(int l, int r, int v) {
         mn += v;
         mx += v;
         add += v;
         sum += v * (r - l + 1LL);
      }
   };

   node unite(const node &a, const node &b) const {
      node res;
      res.mn = min(a.mn, b.mn);
      res.mx = max(a.mx, b.mx);
      res.sum = a.sum + b.sum;
      return res;
   }

   inline void push(int x, int l, int r) {
      int y = (l + r) >> 1;
      int z = x + ((y - l + 1) << 1);
      if (tree[x].add != 0) {
         tree[x + 1].apply(l, y, tree[x].add);
         tree[z].apply(y + 1, r, tree[x].add);
         tree[x].add = 0;
      }
   }

   inline void pull(int x, int z) {
      tree[x] = unite(tree[x + 1], tree[z]);
   }

   int n;
   vector<node> tree;

   void build(int x, int l, int r) {
      if (l == r) {
         return;
      }
      int y = (l + r) >> 1;
      int z = x + ((y - l + 1) << 1);
      build(x + 1, l, y);
      build(z, y + 1, r);
      pull(x, z);
   }

   template <typename M>
   void build(int x, int l, int r, const vector<M> &v) {
      if (l == r) {
         tree[x].apply(l, r, v[l]);
         return;
      }
      int y = (l + r) >> 1;
      int z = x + ((y - l + 1) << 1);
      build(x + 1, l, y, v);
      build(z, y + 1, r, v);
      pull(x, z);
   }

   node get(int x, int l, int r, int ll, int rr) {
      if (ll <= l && r <= rr) {
         return tree[x];
      }
      int y = (l + r) >> 1;
      int z = x + ((y - l + 1) << 1);
      push(x, l, r);
      node res{};
      if (rr <= y) {
         res = get(x + 1, l, y, ll, rr);
      } else {
         if (ll > y) {
            res = get(z, y + 1, r, ll, rr);
         } else {
            res = unite(get(x + 1, l, y, ll, rr), get(z, y + 1, r, ll, rr));
         }
      }
      pull(x, z);
      return res;
   }

   template <typename... M>
   void modify(int x, int l, int r, int ll, int rr, const M&... v) {
      if (ll <= l && r <= rr) {
         tree[x].apply(l, r, v...);
         return;
      }
      int y = (l + r) >> 1;
      int z = x + ((y - l + 1) << 1);
      push(x, l, r);
      if (ll <= y) {
         modify(x + 1, l, y, ll, rr, v...);
      }
      if (rr > y) {
         modify(z, y + 1, r, ll, rr, v...);
      }
      pull(x, z);
   }

   int find_first_knowingly(int x, int l, int r, const function<bool(const node&)> &f) {
      if (l == r) {
         return l;
      }
      push(x, l, r);
      int y = (l + r) >> 1;
      int z = x + ((y - l + 1) << 1);
      int res;
      if (f(tree[x + 1])) {
         res = find_first_knowingly(x + 1, l, y, f);
      } else {
         res = find_first_knowingly(z, y + 1, r, f);
      }
      pull(x, z);
      return res;
   }

   int find_first(int x, int l, int r, int ll, int rr, const function<bool(const node&)> &f) {
      if (ll <= l && r <= rr) {
         if (!f(tree[x])) {
            return -1;
         }
         return find_first_knowingly(x, l, r, f);
      }
      push(x, l, r);
      int y = (l + r) >> 1;
      int z = x + ((y - l + 1) << 1);
      int res = -1;
      if (ll <= y) {
         res = find_first(x + 1, l, y, ll, rr, f);
      }
      if (rr > y && res == -1) {
         res = find_first(z, y + 1, r, ll, rr, f);
      }
      pull(x, z);
      return res;
   }

   int find_last_knowingly(int x, int l, int r, const function<bool(const node&)> &f) {
      if (l == r) {
         return l;
      }
      push(x, l, r);
      int y = (l + r) >> 1;
      int z = x + ((y - l + 1) << 1);
      int res;
      if (f(tree[z])) {
         res = find_last_knowingly(z, y + 1, r, f);
      } else {
         res = find_last_knowingly(x + 1, l, y, f);
      }
      pull(x, z);
      return res;
   }

   int find_last(int x, int l, int r, int ll, int rr, const function<bool(const node&)> &f) {
      if (ll <= l && r <= rr) {
         if (!f(tree[x])) {
            return -1;
         }
         return find_last_knowingly(x, l, r, f);
      }
      push(x, l, r);
      int y = (l + r) >> 1;
      int z = x + ((y - l + 1) << 1);
      int res = -1;
      if (rr > y) {
         res = find_last(z, y + 1, r, ll, rr, f);
      }
      if (ll <= y && res == -1) {
         res = find_last(x + 1, l, y, ll, rr, f);
      }
      pull(x, z);
      return res;
   }

   segtree(int _n) : n(_n) {
      assert(n > 0);
      tree.resize(2 * n - 1);
      build(0, 0, n - 1);
   }

   template <typename M>
   segtree(const vector<M> &v) {
      n = v.size();
      assert(n > 0);
      tree.resize(2 * n - 1);
      build(0, 0, n - 1, v);
   }

   node get(int ll, int rr) {
      assert(0 <= ll && ll <= rr && rr <= n - 1);
      return get(0, 0, n - 1, ll, rr);
   }

   node get(int p) {
      assert(0 <= p && p <= n - 1);
      return get(0, 0, n - 1, p, p);
   }

   template <typename... M>
   void modify(int ll, int rr, const M&... v) {
      assert(0 <= ll && ll <= rr && rr <= n - 1);
      modify(0, 0, n - 1, ll, rr, v...);
   }

   // find_first and find_last call all FALSE elements
   // to the left (right) of the sought position exactly once

   int find_first(int ll, int rr, const function<bool(const node&)> &f) {
      assert(0 <= ll && ll <= rr && rr <= n - 1);
      return find_first(0, 0, n - 1, ll, rr, f);
   }

   int find_last(int ll, int rr, const function<bool(const node&)> &f) {
      assert(0 <= ll && ll <= rr && rr <= n - 1);
      return find_last(0, 0, n - 1, ll, rr, f);
   }
};

int main() {
   ios::sync_with_stdio(false);
   cin.tie(0);
   int tt;
   cin >> tt;
   while (tt--) {
      int n, m, q;
      cin >> n >> m >> q;
      vector<int> a(n);
      for (int i = 0; i < n; i++) {
         cin >> a[i];
         --a[i];
      }
      segtree st(2 * n + 2);
      auto Add = [&](int i) {
//      for (int i = 0; i <= 2 * n + 1; i++) debug(st.get(i, i).mn);
         debug("add", i);
         int x = st.find_first(i, 2 * n + 1, [&](const segtree::node& nd) {
            return nd.mn < m - 1;
         });
         if (i < x) {
            st.modify(i, x - 1, -(m - 1));
         }
         st.modify(x, x, +1);
      };
      auto Remove = [&](int i) {
//      for (int i = 0; i <= 2 * n + 1; i++) debug(st.get(i, i).mn);
//      debug("remove", i);
         int x = st.find_first(i, 2 * n + 1, [&](const segtree::node& nd) {
            return nd.mx > 0;
         });
         if (i < x) {
            st.modify(i, x - 1, +(m - 1));
         }
         st.modify(x, x, -1);
      };
      for (int i = 0; i < n; i++) {
         Add(a[i]);
      }
      Remove(0);
      for (int it = 0; it < q; it++) {
         int x, y;
         cin >> x >> y;
         --x; --y;
         Add(y);
         Remove(a[x]);
         a[x] = y;
         long long sum = st.get(0, 2 * n + 1).sum;
         int p = st.find_first(0, 2 * n + 1, [&](const segtree::node& nd) {
            if (nd.sum < sum) {
               sum -= nd.sum;
               return false;
            }
            return true;
         });
         cout << (n == 1 ? 1 : p + 2) << " \n"[it == q - 1];
      }
   }
   return 0;
}
