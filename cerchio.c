/* Il programma stampa circonferenza e superficie
 * di un cerchio dato il raggio (anche in virgola mobile)
 * non negativo */

#include <stdio.h>

int main()
{
  double pi = 3.14159;
  double raggio;

  do {
    printf("Inserisci il raggio del cerchio: ");
    scanf("%lf", &raggio);
  } while (raggio<0.);

  printf("Diametro: %.3f\n", raggio*2.0);
  printf("Circonferenza: %.3f\n", 2.0 * pi * raggio);
  printf("Superficie: %.3f\n", pi * raggio * raggio);

  return 0;
}
