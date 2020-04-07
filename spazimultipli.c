/* Il programma elimina gli spazi multipli in un file di testo in input
 * 
 * Stati possibili: 
 * 0: c e' diverso dal carattere ' '
 * 1: e' stato rilevato il carattere ' ', verifico se questo si ripete
 * 
 * Stato      Input                 Output      Nuovo stato
 *   0       c != ' '                  c              - 
 *   0       c == ' '                  -              1
 *   1       c != ' '              ' ' + c            0
 *   1       c == ' '                  -              - 
 *   
 */

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