/* Il programma legge in input un intero positivo
 * di 5 cifre e determina se è palindromo.
 */

#include <stdio.h>

int main(){
  int num, c1, c2, c4, c5;
  do {
  printf("Inserisci un numero di 5 cifre: ");
  scanf("%d", &num);
} while (num < 0 || num > 99999);
c5 = num % 10;

num = num / 10;
c4 = num %10;

num = num / 100; /* Perche' c3 non e' stato memorizzato */
c2 = num % 10;

num = num / 10;
c1 = num % 10;

if (c1 == c5 && c2 == c4) printf("Il numero inserito e' un palindromo\n");
else printf("Il numero inserito NON e' un palindromo\n");

return 0;
}