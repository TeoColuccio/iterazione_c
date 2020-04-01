#include <stdio.h>

int main() {
    int caratteri = 0, parole = 0, righe = 0;
    int c;
    int stato = 0;

    while ( (c = getchar()) != EOF) {
        caratteri++;

        if( c == '\n') righe++;
                
        if(stato == 0) {
            if(c == ' ' || c == '\n' || c == '\t') {
                stato = 1;
                parole++;
            }
        }
        else if(stato == 1) {
            if(c != ' ' && c != '\n' && c != '\t')
                stato = 0;
        }
    }
    
    printf("Il numero di caratteri e': %d\n", caratteri);
    printf("Il numero di parole e': %d\n", parole);
    printf("Il numero di righe e': %d\n", righe);

    return 0;
}