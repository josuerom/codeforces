
/**
   ░░█ █▀█ █▀ █░█ █▀▀ █▀█ █▀█ █▀▄▀█
   █▄█ █▄█ ▄█ █▄█ ██▄ █▀▄ █▄█ █░▀░█
**/
import java.util.*;

public class Main {
   public static void main(String[] authorJosuerom) {
      Scanner sc = new Scanner(System.in);
      LinkedList<Integer> list = new LinkedList<Integer>();
      int tt = sc.nextInt();
      int del = 0, e = 0, sz = 0, _sz = 0;
      while (tt-- > 0) {
         String cmd = sc.next();
         if (cmd.equals("AGREGA_IZQ")) {
            e = sc.nextInt();
            list.addFirst(e);
         } else if (cmd.equals("AGREGA_DER")) {
            e = sc.nextInt();
            list.addLast(e);
         } else if (cmd.equals("QUITA_PRIMER")) {
            del = sc.nextInt();
            sz = list.size();
            list.remove(list.indexOf(del));
         } else {
            del = sc.nextInt();
            sz = list.size();
            list.remove(list.lastIndexOf(del));
         }
      }
      System.out.println(list.toString().replaceAll("[\\[\\],]", ""));
      System.exit(0);
   }
}