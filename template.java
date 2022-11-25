/*********************************************
 * @author:           josuerom               *
 * @created:     14/Nov/22 13:30:17          *
*********************************************/
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;

public class SolutionA {
   public static void main(String[] args) {
      pc2Read();
   }

   public static void solve() {
   }

   public static void pc2Read() {
      String vec[], line;
      int arr[], tc;

      BufferedReader buffer = new BufferedReader(new InputStreamReader(System.in));

      try {
         tc = Integer.valueOf(buffer.readLine());

         while (tc-- > 0) {
            line = buffer.readLine();
            arr = Arrays.stream(line.substring(0).split(" ")).map(String::trim)
               .mapToInt(Integer::parseInt).toArray();
            solve(arr);
         }
         buffer.close();
      } catch (NullPointerException e) {
         e.printStackTrace();
      } catch (IOException e) {
         e.printStackTrace();
      }
   }
}
