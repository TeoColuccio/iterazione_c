/* Il programma calcola la somma degli interi pari
 * compresi tra 2 e 30 e il prodotto degli interi dispari 
 * compresi tra 1 e 15.
 */

#include <stdio.h>

int main() {
  int i, somma, prodotto;

  somma = 0;
  for(i = 2; i <= 30; i+=2) somma += i;
  
  prodotto = 1;
  for(i = 1; i <= 15; i+=2) prodotto *= i;

  printf("La somma dei numeri pari compresi tra 2 e 30 e': %d\n", somma);
  printf("Il prodotto dei numeri dispari compresi tra 1 e 15 e': %d\n", prodotto);

  return 0;
}