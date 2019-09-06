/* Il programma, dopo aver chiesto all'utente dieci 
 * numeri interi, li memorizza all'interno di un vettore,
 * li somma, ne calcoli la media e infine stampi tutti i
 * dati e i risultati.
 */

#include <stdio.h>

int main() {
  int i, sum = 0, vett[9], media;

  /* Memorizza gli elementi */
  printf("Inserisci 10 valori interi: \n");
  for(i = 0; i < 10; i++) {
    printf("? ");
    scanf("%d", &vett[i]);
  }

  /* Somma */
  for (i = 0; i < 10; i++) {
    sum += vett[i];
  }
  putchar('\n');

  /* Media */ 
  media = sum / 10;

  /* Stampa dei dati */
  printf("Dati iniziali: \n");
  for(i = 0; i < 10; i++) {
    printf("Numbers[%d] = %d\n", i, vett[i]);
  }
  printf("Somma = %d\n", sum);
  printf("Media = %d\n", media);

  return 0;
}