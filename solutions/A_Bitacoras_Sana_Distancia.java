/**
 *   author:  josuerom
 *   created: 30/06/23 13:37:32
**/
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.util.Arrays;
import java.util.Random;
import java.util.StringTokenizer;
import java.util.Stack;

public class A_Bitacoras_Sana_Distancia {
   static FastReader fr = new FastReader();
   static PrintWriter pw = new PrintWriter(System.out);
   static final boolean DEBUG = false;

   public static void main(String[] authorJosuerom) {
      Stack<Integer> pila = new Stack<>();
      Stack<Integer> aux = new Stack<>();
      int n = fr.readInt();
      int[] t = fr.readArray(n);
      int[] cp = new int[n];
      for (int i = 0; i < n; i++) {
         cp[i] = fr.readInt();
         pila.push(cp[i]);
      }
      solve(pila, cp, t, n);
      fr.close(); pw.close();
   }

   static void solve(Stack<Integer> pila, int[] cp, int[] t, int n) {
      if (DEBUG) pw.println("------------");
      Stack<Integer> k = new Stack<>();
      for (int i = 0, j = 0; i < n; j++) {
         pw.println(cp[i]);
         k.push(cp[i]);
         pila.remove(k.peek());
         i = i + t[j];
         if (DEBUG) pw.printf("n: %d i: %d j: %d\n", n, i, j);
      }
      n = pila.size();
      for (int i = 0; i < n; i++) {
         pw.println(pila.pop());
      }
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