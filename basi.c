#include <stdio.h>

int main(void) {
  int counter, n, i;

  int bit_corrente;
  int peso;

  printf("%5s%10s%5s%4s\n", "N", "Bin", "Oct", "Hex");

  for (counter = 0; counter < 256; counter++) {
    printf("%5d  ", counter);

    peso = 128;
    n = counter;
    for (i = 0; i < 8; i++) {
      bit_corrente = n/peso;
      printf("%d", bit_corrente);
      n -= bit_corrente*peso;
      peso /= 2;
    }

    printf("  ");

    peso = 64;
    n = counter;
    for (i = 0; i < 3; i++) {
      bit_corrente = n/peso;
      printf("%d", bit_corrente);
      n -= bit_corrente*peso;
      peso /= 8;
    }

    printf("  ");

    peso = 16;
    n = counter;
    for (i = 0; i < 2; i++) {
      bit_corrente = n/peso;
      switch(bit_corrente) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
          printf("%d", bit_corrente);
          break;
        case 10:
          putchar('A');
          break;
        case 11:
          putchar('B');
          break;
        case 12:
          putchar('C');
          break;
        case 13:
          putchar('D');
          break;
        case 14:
          putchar('E');
          break;
        case 15:
          putchar('F');
          break;
        default:
          putchar('-');
          break;
      }
      n -= bit_corrente*peso;
      peso /= 16;
    }

    putchar('\n');
  }

  return 0;
}