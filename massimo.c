/* Il programma accetta 10 numeri in input 
 * e ne determina il maggiore
 */

#include <stdio.h>

int main() {
  int num, max;
  int i=2;

  printf("Inserisci 10 numeri...\n");

  printf("Numero 1: ");
  scanf("%d", &num);
  max=num;
  while (i <= 10) {
    printf("Numero %d: ", i);
    scanf("%d", &num);
    if (num>max) max = num;
    i++;
  }

  printf("Il numero maggiore e': %d\n", max);
  return 0;
}
