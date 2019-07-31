/* Il programma prende in input il lato di un quadrato
 * compreso tra 1 e 20 e poi ne disegna solo il perimetro
 * con il carattere scelto */

#include <stdio.h>

int main() {
  int lato;
  int i=0; 
  int j=0;
  
  char carattere;
  printf("Inserisci il carattere da utilizzare per il disegno: ");
  scanf("%c", &carattere);

  do { 
    printf("Inserisci il valore del lato (min 1, max 20): ");
    scanf("%d", &lato);
  } while (lato < 1 || lato > 20);

  while (i<lato) {
    while(j<lato) {
      putchar(carattere);
      j++;
    }
    putchar('\n');
    j=0;
    i++;
  }

  return 0;
}
