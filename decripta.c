/* Il programma accetta un intero di quattro cifre 
 * crittografato con il metodo dell'esercizio precedente
 * e restituisce il numero originale.
 */

#include <stdio.h>

int main() {
  int num, tmp, c1, c2, c3, c4;

  do {
    printf("Numero da decrittografare: ");
    scanf("%d", &num);
  } while (num < 0 || num > 9999);

  /* Trovo le cifre originali */
  c4 = num % 10;

  num /= 10;
  c3 = num % 10;
    
  num /= 10;
  c2 = num % 10;
    
  num /= 10;
  c1 = num % 10;

  /* scambio di posizioni*/
  tmp = c3;
  c3 = c1;
  c1 = tmp;

  tmp = c2;
  c2 = c4;
  c4 = tmp;

  /* modifico i valori */
  c4 = (c4+3) % 10;
  c3 = (c3+3) % 10;
  c2 = (c2+3) % 10;
  c1 = (c1+3) % 10;

  /* ricrea il numero originale */
  num = c1 * 1000 + c2 * 100 + c3 * 10 + c4;

  printf("Numero originale: %d\n", num);

  return 0;
}