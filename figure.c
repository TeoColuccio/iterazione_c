/* Il programma stampa una serie di figure utilizzando 
 * esclusivamente la funzione putchar()
 */

#include <stdio.h>

int main() {
int righe, caratteri, spazi;
  /* Figura a */
  printf("a) \n");
  for (righe = 1; righe <= 10; righe++) {
    for (caratteri = 1; caratteri <= righe; caratteri++) {
      putchar('*');
    }
      putchar('\n');
  }

  /* Figura b */
  printf("b) \n");
  for (righe = 1; righe <= 10; righe++) {
    for (caratteri = 10; caratteri >= righe; caratteri--) {
      putchar('*');
    }
      putchar('\n');
  }

  /* Figura c */
  printf("c) \n");
  for (righe = 1; righe <= 10; righe++) {
    for (spazi = 0; spazi < righe; spazi++) {
      putchar(' ');
    }  
    for (caratteri = 10; caratteri >= righe; caratteri--) {
      putchar('*');
    }  
    putchar('\n');
  }

  /* Figura d */
  printf("d) \n");
   for (righe = 1; righe <= 10; righe++) {
    for (spazi = 10; spazi > righe; spazi--) {
      putchar(' ');
    }  
    for (caratteri = 1; caratteri <= righe; caratteri++) {
      putchar('*');
    }  
    putchar('\n');
  }

  return 0;
}