/* Il programma elimina gli spazi multipli in un file di testo in input
 * 
 * Stati possibili: 
 * NORM: c e' diverso dal carattere ' '
 * SPACE: e' stato rilevato il carattere ' ', verifico se questo si ripete
 * 
 * Stato      Input                 Output      Nuovo stato
 *  NORM     c != ' '                  c             - 
 *  NORM     c == ' '                 ' '          SPACE
 *  SPACE    c != ' '                  c           NORM
 *  SPACE    c == ' '                  -             - 
 *   
 */

#include <stdio.h>

int main() {
    enum Stato { NORM, SPACE };

    int stato = NORM;
    int c;

    while ( (c = getchar()) != EOF) {
        if (stato == NORM) {   
            if(c == ' ') stato = SPACE;
            putchar(c);
        }
        else if (stato == SPACE) {
            if(c != ' ') {
                putchar(c);
                stato = NORM;
            }
        }
    }
    putchar('\n');

    return 0;
}