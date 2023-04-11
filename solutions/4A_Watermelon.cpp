/******************************************
* @AUTHOR:            JOSUEROM            *
* @UNIVERSITY: MINUTE OF GOD OF COLOMBIA  *
******************************************/
#include <iostream>
using namespace std;

int main() {
   int w = 0; cin >> w;
   if (w > 3) cout << (w%2==0) ? "YES" : "NO";
   else cout << "NO";
   return 0;
}