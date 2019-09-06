/* Il programma calcola il valore di π mediante la formula:
 * pi = 4 - 4/3 + 4/5 - 4/7 + 4/9 - 4/11 + ...
 * Il numero di termini della serie da utilizzare deve essere chiesto all'utente.
 */

#include <stdio.h>

int main() {
  double pi;
  int termini, conta;
  int segno = +1;
  
  printf("Approssimazione di Pi Greco mediante la serie: \n");
  printf("4 - 4/3 + 4/5 - 4/7 + 4/9 - 4/11 + ...\n");
  
  printf("Quanti termini vuoi utilizzare? ");
  scanf("%d", &termini);

  pi = 0.0;
  for (conta = 0; conta < termini; conta++) {
    pi += segno * 4./(2.*conta+1);
    segno = - segno;
  }

  printf("pi = %f\n", pi);
  return 0;
}