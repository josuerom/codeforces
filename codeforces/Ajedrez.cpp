#include <iostream>

using namespace std;

void solve() {
     int n,m, count;
     bool neg=true;
     int matrix[n][n];
     cin >> n >> m;
     if (n!=1) {
         if (m==1) {
            cout << "YES\n";
         } else {
             while (m--) {
                int xi, yi;
                cin >> xi >> yi;
                matrix[xi][yi] = 1;
             }
             for (int i = 0; i < n; i++) {
                 count = 0;
                 for (int j = 0; j < n; j++) {
                     if (matrix[i][j] == 1) count++;
                 }
                 if (count >= 2) {
                    neg = false;
                    cout << "NO\n"; break;
                 }
             }
             if (neg) {
                for (int i = 0; i < n; i++) {
                    count = 0;
                    for (int j = 0; j < n; j++) {
                       if (matrix[j][i] == 1) count++;
                    }
                    if (count >= 2) {
                        cout << "NO\n"; break;
                    }
                 }
             }
         }
     } else {
            cout << "NO\n";
     }
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
