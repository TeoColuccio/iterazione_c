/* Il programma chiede all'utente di inserire un numero
 * intero ed esegue un conto alla rovescia.
 */

#include <stdio.h>

int main() {
  int num;
  
  printf("Conto alla rovescia\n");
  printf("Da che numero devo partire? ");
  scanf("%d", &num);

  while (num > 0) {
    printf("%d\n", num);
    num-=1;
  }
  printf("Lanciato!");

  return 0;
}

