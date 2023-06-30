if (DEBUG) pw.println("------------");
      if (n <= 2) {
         for (int i = 0; i < n; i++) {
            pw.println(pila.get(i));
         }
      } else {
         int i = 0, j = 0;
         while (i < n) {
            pw.println(aux.get(i));
            pila.remove(pila.get(i));
            i += t[j]; j++;
         }
         while (!pila.empty())
            pw.println(pila.pop());
      }