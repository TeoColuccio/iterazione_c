/* Il programma stampa, una per riga, le parole di un file 
 * di testo in input.
 * 
 * Stati        Input                  Output      Nuovo stato
 *  IN     c != ' ', '\t', '\n'          c              -
 *  IN     c == ' ' o '\t', o '\n'      '\n'            -
 */


#include <stdio.h>

int main() {

    int c;

    while ( (c = getchar()) != EOF) {
        if(c == ' ' || c == '\t' || c == '\n') 
            putchar('\n');
        else putchar(c);
    }
    putchar('\n');

    return 0;
}
    