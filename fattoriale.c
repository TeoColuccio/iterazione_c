/* Il programma calcola i fattoriali degli interi da 1 a 5
 */

#include <stdio.h>

int main() {
int i, fatt = 1;

for (i = 1; i <= 5; i++) {
    printf("%4d!", i);
}
putchar('\n');

for (i = 1; i <= 5; i++) {
    fatt *= i;
    printf("%5d", fatt);
}
putchar('\n');

return 0;
}
