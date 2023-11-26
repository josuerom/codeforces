/**
 *   author:  josuerom
 *   created: 29/06/23 21:24:37
**/
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.util.Arrays;
import java.util.Random;
import java.util.StringTokenizer;
import static java.lang.Math.*;

public class A_Polycarp_and_Coins {
   static FastReader fr = new FastReader();
   static PrintWriter pw = new PrintWriter(System.out);
   static final Random random = new Random();
   static final int MOD = 1_000_000_007;
   static final int MAX = 1_000_007;
   static final boolean DEBUG = true;

   public static void main(String[] authorJosuerom) {
      int tt = fr.readInt();
      while (tt-- > 0) {
         int n = fr.readInt();
         solve(n);
      }
      fr.close(); pw.close();
   }

   static void solve(int n) {
      int a = n/3, b = a + 1;
      if (n%3 != 0) {
         if ((a*1 + b*2) == n)
            pw.printf("%d %d\n", a, b);
         else
            pw.printf("%d %d\n", b, a);
      } else pw.printf("%d %d\n", a, a);
   }

   static void ruffleSort(int[] a) {
      int n = a.length;
      for (int i = 0; i < n; i++) {
         int oi = random.nextInt(n), temp = a[oi];
         a[oi] = a[i]; a[i] = temp;
      }
      Arrays.sort(a);
   }

   static long add(long a, long b) {
      return (a+b) % MOD;
   }
   static long sub(long a, long b) {
      return ((a-b) % MOD + MOD) % MOD;
   }
   static long mul(long a, long b) {
      return (a*b) % MOD;
   }
   static long div(long a, long b) {
      return (a/b) % MOD;
   }
   static long exp(long base, long exp) {
      if (exp==0) return 1;
      long half=exp(base, exp/2);
      if (exp%2==0) return mul(half, half);
      return mul(half, mul(half, base));
   }

   static long[] factorials = new long[2_000_007];
   static long[] invFactorials = new long[2_000_007];

   static void precompFacts() {
      factorials[0] = invFactorials[0] = 1;
      for (int i = 1; i < factorials.length; i++) factorials[i] = mul(factorials[i-1], i);
      invFactorials[factorials.length-1] = exp(factorials[factorials.length-1], MOD-2);
      for (int i = invFactorials.length-2; i >= 0; i--) invFactorials[i] = mul(invFactorials[i+1], i+1);
   }
   static long nCr(int n, int r) {
      return mul(factorials[n], mul(invFactorials[r], invFactorials[n-r]));
   }

   static class FastReader {
      BufferedReader br;
      StringTokenizer st;

      public FastReader() {
         br = new BufferedReader(new InputStreamReader(System.in));
         st = new StringTokenizer("");
      }

      void close() {
         try { br.close(); }
         catch (IOException e) { e.printStackTrace(); }
      }

      String next() {
         while (!st.hasMoreTokens()) {
            try { st = new StringTokenizer(br.readLine()); }
            catch (IOException e) { e.printStackTrace(); }
         }
         return st.nextToken();
      }
      String readLine() {
         String line = null;
         try { line = br.readLine(); }
         catch (IOException e) { e.printStackTrace(); }
         return line;
      }

      double readDouble() { return Double.parseDouble(next()); }
      long readLong() { return Long.parseLong(next()); }
      int readInt() { return Integer.parseInt(next()); }

      long[] readArrayLong(int N) {
         long[] a = new long[N];
         for (int i = 0; i < N; i++) { a[i] = readLong(); }
         return a;
      }
      int[] readArray(int N) {
         int[] a = new int[N];
         for (int i = 0; i < N; i++) { a[i] = readInt(); }
         return a;
      }
   }
}