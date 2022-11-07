/** @author josuerom */
#include <iostream>
#include <string.h>
using namespace std;

int main() {
   ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
   char A[101], B[101];
   cin.getline(A, 101, '\n');
   cin.getline(B, 101, '\n');
   strlwr(A); strlwr(B);
   if (strcmp(A, B)==0) cout << "0";
   else if (strcmp(B, A)>0) cout << "-1";
   else if (strcmp(A, B)>0) cout << "1";
   return 0;
}