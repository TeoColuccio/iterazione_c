#include <stdio.h>

int main() {
    int stato = 0;
    int c;

    while ( (c = getchar()) != EOF) {
        if (stato == 0) {   
            if(c == ' ') stato = 1;
            putchar(c);
        }
        else if (stato == 1) {
            if(c != ' ') {
                putchar(c);
                stato = 0;
            }
        }
    }
    putchar('\n');

    return 0;
}