/* Il programma legge in input un numero binario
 * e ne calcola il corrispondente valore decimale 
 */

#include <stdio.h>

int main(){
  int bin, bin_backup, is_binary, c;
  int dec = 0;
  int w = 1;

  do {
    printf("Inserisci un numero in binario: ");
    scanf("%d", &bin);
    bin_backup = bin;
    is_binary = 1;

    while (bin > 0) {
      c = bin % 10;
      if (c != 0 && c != 1) {
        is_binary = 0;
        break;
      }
      bin = bin / 10;
    }
  } while (is_binary == 0);

  bin = bin_backup; /* Ripristino la variabile bin */

  while (bin > 0) {
  c = bin % 10;
  dec += c*w;
  w *= 2;  
  bin /= 10;
  }  

  printf("%d(2) = %d(10)\n", bin_backup, dec);

  return 0;
}
