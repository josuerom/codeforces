/**
 *   author:  josuerom
 *   created: 14/01/23 13:30:17
**/
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.util.Arrays;
import java.util.Random;
import java.util.StringTokenizer;
import java.util.Collections;
import java.util.ArrayList;
import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileReader;

public class Solution {
   public static void main(String[] args) {
      FastReader fr = new FastReader();
      PrintWriter pw = new PrintWriter(System.out);
      
      pw.flush(); pw.close();
   }
   
   static final Random random = new Random();
   static final int MOD = 1_000_000_007;
   static final int MAX = 1_000_000_000; // MAX 10^9
   static final boolean DEBUG = false;
   
   static class Treasure {
      public Treasure() { }
      
      void shuffle(int[] a) {
         int n = a.length;
   		for (int i = 0; i < n; i++) {
   			int r = random.nextInt(a.length), temp = a[i];
   			a[i] = a[r]; a[r] = temp;
   		}
   	}
   
      void ruffleSort(int[] a) {
         int n = a.length;
         for (int i = 0; i < n; i++) {
            int r = random.nextInt(n), temp = a[r];
            a[r] = a[i]; a[i] = temp;
         }
         Arrays.sort(a);
      }
      
      long add(long a, long b) {
         return (a+b) % MOD;
      }
      
      long sub(long a, long b) {
         return ((a-b) % MOD + MOD) % MOD;
      }
      
      long mul(long a, long b) {
         return (a*b) % MOD;
      }
      
      long exp(long base, long exp) {
         if (exp==0) return 1;
         long half=exp(base, exp/2);
         if (exp%2==0) return mul(half, half);
         return mul(half, mul(half, base));
      }
      
      long[] factorials = new long[2_000_010];
      long[] invFactorials = new long[2_000_010];
      
      void precompFacts() {
         factorials[0] = invFactorials[0] = 1;
         for (int i = 1; i < factorials.length; i++) factorials[i] = mul(factorials[i-1], i);
         invFactorials[factorials.length-1] = exp(factorials[factorials.length-1], MOD-2);
         for (int i = invFactorials.length-2; i >= 0; i--) invFactorials[i] = mul(invFactorials[i+1], i+1);
      }
      
      long nCr(int n, int r) {
         return mul(factorials[n], mul(invFactorials[r], invFactorials[n-r]));
      }

      long nPr(int n, int r) {
         return mul(factorials[n], mul(invFactorials[r], invFactorials[n]));
      }
   }

   static class FastReader {
      BufferedReader br;
      StringTokenizer st;
      
      public FastReader() {
         br = new BufferedReader(new InputStreamReader(System.in));
      }
      public FastReader(String txt) throws FileNotFoundException {
         br = new BufferedReader(new FileReader(new File(txt)));
      }
      
      String next() {
         while (st==null || !st.hasMoreTokens()) {
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
      int readInt() {
         return Integer.parseInt(next());
      }
      long readLong() {
         return Long.parseLong(next());
      }
      int[] readArray(int n) {
         int[] a = new int[n];
         for (int i = 0; i < n; i++) {
            a[i] = readInt();
         }
         return a;
      }
   }
}
