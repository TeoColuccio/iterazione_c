/* Il programma conta i caratteri, le parole e le righe presenti
 * in un testo di input.
 * 
 * Stati possibili: 
 * NORM: c e' diverso dai caratteri speciali ' ', '\n', '\t'.
 * CAR: e' stato rilevato un carattere speciale, verifico se questo si ripete
 * 
 *  Stato      Input                  Output      Nuovo stato
 *   NORM    c != ' ', '\n', '\t'        c             -
 *   NORM    c == ' ' o '\n' o '\t'   parole++        CAR
 *   CAR     c != ' ', '\n', '\t'        -            NORM
 *   
 */


#include <stdio.h>

int main() {
    enum Stato { NORM, CAR };
    int caratteri = 0, parole = 0, righe = 0;
    int c;
    int stato = NORM;

    while ( (c = getchar()) != EOF) {
        caratteri++;

        if( c == '\n') righe++;
                
        if(stato == NORM) {
            if(c == ' ' || c == '\n' || c == '\t') {
                stato = CAR;
                parole++;
            }
        }
        else if(stato == CAR) {
            if(c != ' ' && c != '\n' && c != '\t')
                stato = NORM;
        }
    }
    
    printf("Il numero di caratteri e': %d\n", caratteri);
    printf("Il numero di parole e': %d\n", parole);
    printf("Il numero di righe e': %d\n", righe);

    return 0;
}