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
    putchar(carattere);
    i++;
  }
  putchar('\n');

  j = 1;
  while (j < lato-1) {
    putchar(carattere);
  
    i = 1;
    while (i < lato-1) {
      putchar(' ');
      i++; 
    }
  putchar(carattere);
  putchar('\n');
  j++;    
  }

  if (lato > 1) {
    i = 0;
    while (i < lato) {
      putchar(carattere);
      i++;
    }
    putchar('\n');
  } 
  return 0;
}