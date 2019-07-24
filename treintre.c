/* Il programma, dopo aver chiesto all'utente di inserire 
 * un numero intero, conta di 3 in 3 per cinque volte.
 */

#include <stdio.h>

int main() {
  int num;
  int contatore=5;

  printf("Conta di 3 in 3\n");
  printf("Numero di partenza: ");
  scanf("%d", &num);

  while(contatore > 0) {
    printf("%d\n", num);
    num+=3;
    contatore--;
  }

  return 0;
}
