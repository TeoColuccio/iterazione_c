/* Il programma stampa la tabella pitagorica */

#include <stdio.h>

int main() {
  int riga=1;
  int colonna=1;

  while (riga <= 10) {
    while (colonna <=10) {
      printf("%5d", riga*colonna);
      colonna++;
    }
    putchar('\n');
    riga++;
    colonna=1;
  }

  return 0;
}
