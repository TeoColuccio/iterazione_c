/* Il programma prende in input il lato di un quadrato
 * compreso tra 1 e 20 e poi ne disegna solo il perimetro
 * con il carattere '*'
 */

#include <stdio.h>

int main() {
  int lato;
  int i;
  int j;

  int carattere = '*';

  do {
    printf("Inserisci il valore del lato (min 1, max 20): ");
    scanf("%d", &lato);
  } while (lato < 1 || lato > 20);

  i = 0;
  while (i<lato) {
    j = 0;
    while (j<lato) {
      if (i == 0 || i==lato-1) { /* Prima ed ultima riga */
        while (j<lato) {
          putchar(carattere);
          j++;
        }
      }
      if (j==0) { /* Prima colonna */
        putchar(carattere);
        j++;
        while (j<lato) {
          putchar(' '); /* Resto delle colonne */
          if (j==lato-2) putchar(carattere); /* Ultima colonna */
          j++;
        }
      }
      putchar('\n');
      i++;
    }
  }
  return 0;
}
