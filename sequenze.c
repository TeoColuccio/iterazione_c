/* Il programma genera, con dei cicli for, 
 * delle sequenze di numeri
 */

#include <stdio.h>

int main() {
  int i;

  /* Le 4 sequenze: */
  printf("a) ");
  for (i = 1; i <= 8; i++) printf("%d ", i);
  putchar('\n');

  printf("b) ");
  for (i = 3; i <= 23 ; i += 5) printf("%d ", i);
  putchar('\n');

  printf("c) ");
  for (i = 20; i >= -10; i -= 6) printf("%d ", i);
  putchar('\n');

  printf("d) ");
  for (i = 19; i <= 51; i += 8) printf("%d ", i);
  putchar('\n');

  return 0;
}