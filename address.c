/* Il programma stampa il valore dell'indirizzo di 
 * tutti gli elementi di un vettore di dieci interi.
 */

#include <stdio.h>

int main() {
  int vett[9], i;

  for(i = 0; i < 10; i++) {
    printf("indirizzo di num[%d]= %p\n", i, (void *)&vett[i]);
  }

  return 0;
}