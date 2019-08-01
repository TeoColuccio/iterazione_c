/* Il programma stampa la tabella pitagorica */

#include <stdio.h>

int main() {
  int riga=1;
  int colonna=1;

  while (riga <= 10) {
    colonna=1;
    while (colonna <=10) {
      printf("%5d", riga*colonna);
      colonna++;
    }
    putchar('\n');
    riga++;
  }

  return 0;
}
