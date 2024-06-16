/**
 *   author:  josuerom
 *   created: 03/06/24 18:22:09
**/
import java.io.*;
import java.util.*;
import static java.lang.Math.*;

public class A_Mocha_and_Math {
   public static void main(String[] args) {
      try (FastReader io = new FastReader()) {
         int tt = 1;
         tt = io.nextInt();
         while (tt-- > 0) solve(io);
      }
      System.exit(0);
   }

   public static void solve(FastReader io) {
      int n = io.nextInt();
      int ans = io.nextInt();
      for (int i = 1; i < n; i++) {
         ans &= io.nextInt();
      }
      io.println(ans);
   }

   static class FastReader extends PrintWriter {
      private BufferedReader br;
      private StringTokenizer st;

      public FastReader() {
         this(System.in, System.out);
      }

      public FastReader(InputStream i, OutputStream o) {
         super(o);
         br = new BufferedReader(new InputStreamReader(i));
      }

      public FastReader(String idFile) throws IOException {
         super("samples/output.out");
         br = new BufferedReader(new FileReader("samples/" + idFile));
      }

      public String next() {
         try {
            while (st == null || !st.hasMoreTokens())
               st = new StringTokenizer(br.readLine());
            return st.nextToken();
         } catch (Exception e) {
            e.printStackTrace();
         }
         return null;
      }

      public String nextLine() {
         String line = null;
         try {
            line = br.readLine();
         } catch (IOException e) {
            e.printStackTrace();
         }
         return line;
      }

      public int nextInt() {
         return Integer.parseInt(next());
      }

      public long nextLong() {
         return Long.parseLong(next());
      }

      public double nextDouble() {
         return Double.parseDouble(next());
      }

      public int[] readArray(int n) {
         int[] a = new int[n];
         for (int i = 0; i < n; i++) {
            a[i] = nextInt();
         }
         return a;
      }
   }
}