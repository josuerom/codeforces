/**
   ░░█ █▀█ █▀ █░█ █▀▀ █▀█ █▀█ █▀▄▀█
   █▄█ █▄█ ▄█ █▄█ ██▄ █▀▄ █▄█ █░▀░█
   created: 30/06/23 10:47:10
**/
import java.util.Scanner;
import java.util.Stack;

public class A_Balanceo_Parentesis {
   public static void main(String[] authorJosuerom) {
      readInput();
   }

   static void solve(String[] s, int n) {
      Stack<String> pila = new Stack<>();
      int index = 0;
      for (int i = 0; i < n; i++) {
         if (s[i].equals("(") || s[i].equals("{") || s[i].equals("[")) {
            pila.push(s[i]);
            index = i;
         } else if (pila.empty() && (s[i].equals(")") || s[i].equals("}") || s[i].equals("]"))) {
            System.out.println("Error en " + i);
            return;
         } else if (s[i].equals(")") || s[i].equals("}") || s[i].equals("]")) {
            if (s[i].equals(")") && pila.peek().equals("(")) pila.pop();
            else if (s[i].equals("}") && pila.peek().equals("{")) pila.pop();
            else if (s[i].equals("]") && pila.peek().equals("[")) pila.pop();
            else {
               System.out.println("Error en " + i);
               return;
            }
         }
      }
      System.out.println((pila.size() == 1) ? "Error en " + index : "Balanceada");
   }

   static void readInput() {
      Scanner sc = new Scanner(System.in);
      String[] line = sc.next().split("");
      int n = line.length;
      solve(line, n);
      sc.close(); System.out.close();
   }
}