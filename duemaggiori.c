/* Il programma accetta 10 numeri in input 
 * e ne determina i 2 maggiori
 */
   
#include <stdio.h>
 
int main() {
  int num, max1, max2;
  int i=3;
 
  printf("Inserisci 10 numeri...\n");
 
  printf("Numero 1: ");
  scanf("%d", &num);
  max1=num;
  
  printf("Numero 2: ");
  scanf("%d", &num);
  if (num > max1) {
    max2 = max1;
    max1 = num;
  } else max2 = num;

  while (i <= 10) {
    printf("Numero %d: ", i);
    scanf("%d", &num);
    if (num>max1) {
      max2 = max1;
      max1 = num;
    } else if (num>max2) max2 = num; 
      i++;
   }
 
  printf("I due numeri maggiori sono: %d e %d\n", max1, max2);
  return 0;
}
