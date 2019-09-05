/* Il programma calcola il valore di π mediante la formula:
 * pi = 4 - 4/3 + 4/5 - 4/7 + 4/9 - 4/11 + ...
 * Il numero di termini della serie da utilizzare deve essere chiesto all'utente.
 */

#include <stdio.h>

int main() {
  double pi, b;
  int termini, conta;
  
  printf("Approssimazione di Pi Greco mediante la serie: \n");
  printf("4 - 4/3 + 4/5 - 4/7 + 4/9 - 4/11 + ...\n");
  
  printf("Quanti termini vuoi utilizzare? ");
  scanf("%d", &termini);

  b = 1.0;
  pi = 0.0;
  for (conta = 1; conta <= termini; conta++) {
    if (conta % 2 == 0) pi -= 4.0/b;
    else pi += 4.0/b;
    b+=2.0;
  }

  printf("pi = %f\n", pi);
  return 0;
}