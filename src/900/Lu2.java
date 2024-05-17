/**
   ░░█ █▀█ █▀ █░█ █▀▀ █▀█ █▀█ █▀▄▀█
   █▄█ █▄█ ▄█ █▄█ ██▄ █▀▄ █▄█ █░▀░█
**/
import java.io.*;
import java.util.*;
import static java.lang.Math.*;

public class Lu2 {
   public static void main(String[] args) {
      try (FastReader io = new FastReader()) {
         int tt = 1;
         // tt = io.nextInt();
         while (tt-- > 0)
            solve(io);
      }
      System.exit(0);
   }

   public static void solve(FastReader io) {
      int n = io.nextInt();
      String[] ln = io.nextLine().split("");
      int a = 0, b = 0;
      for (int i = 0; i < ln.length; i++) {
         if (!ln[i].equals("4") && !ln[i].equals("7")) {
            io.println("NO");
            return;
         }
         a += (i < n / 2) ? Integer.parseInt(ln[i]) : 0;
         b += (i >= n / 2) ? Integer.parseInt(ln[i]) : 0;
      }
      io.println(a == b ? "YES" : "NO");
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