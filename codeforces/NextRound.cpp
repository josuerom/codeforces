#include <iostream>
using namespace std;
#define MAX 1E5+3

int main() {
   ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
   short N, k, c=0;
   cin >> N >> k;
   short queris[N];
   for (auto &e : queris) cin >> e;
   for (int l = 0; l < N; l++) {
      if (queris[l] > 0 && queris[l]>=queris[k-1]) ++c;
      else break;
   }
   cout << c << endl;
   return 0;
}