/* Il programma prende in input il lato di un quadrato
 * compreso tra 1 e 20 e poi lo disegna con il carattere * 
 */

#include <stdio.h>

int main() {
  int lato;
  int i=0; 
  int j=0;
  
  int carattere = '*';

  do { 
    printf("Inserisci il valore del lato (min 1, max 20): ");
    scanf("%d", &lato);
  } while (lato < 1 || lato > 20);

  while (i<lato) {
    j=0;
    while(j<lato) {
      putchar(carattere);
      j++;
    }
    putchar('\n');
    i++;
  }

  return 0;
}
