/* Il programma, data una stringa (non in input), 
 * ne stampa i caratteri uno per riga.
 */

#include <stdio.h>

int main() {
  char str[] = "Hello World";
  int i;

  printf("Stringa iniziale: ");
  puts(str);
  
  i = 0;
  while (str[i] != '\0') {
    printf("%c\n", str[i]);
    i++;
  }

  return 0;
}