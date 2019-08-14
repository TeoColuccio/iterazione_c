/* Il programma legge in input un intero positivo
 * e dice quanti 7 sono presenti tra le cifre che lo compongono
*/

#include <stdio.h>

int main() {
  int num, num_orig, c;
  int conta = 0;

  do {
    printf("Inserisci un numero intero positivo: \n");
    scanf("%d", &num);
  } while (num < 0);

  num_orig = num;

  while (num > 0) {
    c = num % 10;
    if (c == 7) {
      conta++;
    }
    num /= 10;
  }
  printf("Il numero %d contiene %d volte la cifra 7\n", num_orig, conta);

  return 0;
}
