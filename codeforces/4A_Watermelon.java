/*********************************************
 * @author:           josuerom               *
 * @created:     25/Nov/22 13:28:43          *
*********************************************/
import java.util.Scanner;

public class Watermelon {
   public static void main(String[] args) {
      Scanner sc = new Scanner(System.in);
      int w = sc.nextInt();
      System.out.println(w>3 && w%2==0 ? "YES" : "NO");
   }
}