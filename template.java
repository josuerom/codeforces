/**
 *  author: josuerom
 * created: 14/11/22 13:30:17
**/
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;

public class Template {
   public static void main(String[] args) {
      standardInput();
   }

   public static void solve() {$2
   }

   public static void standardInput() {
      String line = null;
      int arr[], tt;

      BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

      try {
         tt = Integer.valueOf(br.readLine());
         while (tc-- > 0) {
            line = br.readLine();$1
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
