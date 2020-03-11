#include <stdio.h>

void dec_to_bin(int);
void dec_to_oct(int);
void dec_to_esa(int);

int main() {
    printf(" N    Bin       Oct  Hex\n");

    for(int i=0; i<=255; i++) {
        printf("%2d  ", i);
        printf("  "); 
        dec_to_bin(i);
        printf("  "); 
        dec_to_oct(i);
        printf("  "); 
        dec_to_esa(i);
        printf("\n"); 
    }

    return 0;
}

void dec_to_bin(int num) {
    int vett[50];
    int i;

    for(i=0; i<8; i++) {
        vett[i] = num % 2;
        num = num / 2;
    }

    for(int j=i-1; j>=0; j--) {
        printf("%d", vett[j]);
    }
}

void dec_to_oct(int num) {
    int vett[50];
    int i;

    for(i=0; i<3; i++) {
        vett[i] = num % 8;
        num = num / 8;
    }

    for(int j=i-1; j>=0; j--) {
        printf("%d", vett[j]);
    }
}

void dec_to_esa(int num) {
    int vett[50];
    int i;

    for(i=0; i<2; i++) {
        vett[i] = num % 16;
        num = num / 16;
    }
    for(int j=i-1; j>=0; j--) {
        switch (vett[j]) {
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
            printf("%d", vett[j]);
            break;
        }
    }
}