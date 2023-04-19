/**
 *  author:  josuerom
 *  created: 15/04/23 17:35:26
**/
#pragma GCC optimize("03,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")

#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(0);
   int n, x;
   cin >> n >> x;
   vector<int> a(n);
   double s = 0.0d;
   for (int i = 0; i < n; i++) {
      cin >> a[i];
      s += pow(abs(a[i]), 2);
   }
   for (int i = 0; i < n; i++) {
      cout << (a[i]) << " ";
   }
   // Hijueputa no pude con este problema.
   // Sé que S es la sumatoria de los elementos de a al cuadrado y eso se debe dividir.
   return 0;
}