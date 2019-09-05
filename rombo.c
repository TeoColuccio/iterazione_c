/* Il programma, preso in input un intero dispari compreso
 * tra 1 e 19, disegna un rombo utilizzando solo chiamate a putchar().
 */

#include <stdio.h>

int main() {
  int num, righe, caratteri, spazi;

  do {
    printf("Inserisci un numero dispari: ");
    scanf("%d", &num);
  } while (num % 2 == 0);

/* Parte superiore */
  for (righe = 0; righe < num / 2; righe++) {
    for(spazi = 1; spazi < num / 2 -righe+1; spazi++) {
      putchar(' ');
    }
    for(caratteri = 1; caratteri <= 2*righe+1; caratteri++) {
      putchar('*');
    }
    putchar('\n');
  }

/* Parte centrale */
  for (caratteri = 1; caratteri <= num; caratteri++) putchar('*');
  putchar('\n');

  /* Parte inferiore */
  for (righe = 0; righe < num/2; righe++) {
    for (spazi = 1; spazi <= righe+1; spazi++) {
      putchar(' ');
    }
    for (caratteri = 1; caratteri < num - (2*righe+1); caratteri++) {
      putchar('*');
    }
    putchar('\n');
  }

  return 0;
}
