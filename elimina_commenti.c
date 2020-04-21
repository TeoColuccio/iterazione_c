/* Il programma elimina i commenti C da un input di testo.
 * 
 * Stati possibili: 
 * NORM: stampa c 
 * STR: trovato '"', resto in questo stato, fin quando non trovo nuovamente '"' 
 * APICE: trovato ''', resto in questo stato, fin quando non trovo nuovamente '''
 * SLASH: trovato '/', verifico se il carattere attuale e' '*'
 * COMM: trovato un '*', sono all'interno di un commento
 * ASTER: trovato un '*', verifico se il carattere successivo e' '/'
 * 
 * Stato                 Input                             Output         Nuovo stato 
 * NORM      c != '/' && c != ''' && c != '"'                c                 -
 * NORM                  c == '''                            c               APICE
 * NORM                  c == '"'                            c                STR 
 * NORM                  c == '/'                            -               SLASH
 * APICE                 c != '''                            c                 -
 * APICE                 c == '''                            c                NORM
 *  STR                  c != '"'                            c                 -
 *  STR                  c == '"'                            c                NORM
 * SLASH                 c != '*'                         '/' + c             NORM
 * SLASH                 c == '*'                             -               COMM
 * COMM                  c != '*'                             -                -
 * COMM                  c == '*'                             -               ASTER
 * ASTER                 c != '/'                             -               COMM
 * ASTER                 c == '/'                             -               NORM          
 */

#include <stdio.h>

int main() {
    enum Stato { NORM, APICE, STR, SLASH, COMM, ASTER };
    int stato = NORM;
    int c;

    while( (c = getchar()) != EOF) {
        if (stato == NORM) {
            if (c != '/' && c != '\'' && c != '\"') putchar(c);
            else if (c == '/') stato = SLASH;
            else if (c == '\'') { 
                putchar(c);
                stato = APICE;
            }        
            else if (c == '\"') {
            putchar(c);
            stato = STR;
            }
        }
        else if (stato == APICE) {
            if (c != '\'') putchar(c);
            else {
                putchar(c);
                stato = NORM;
            }
        }
        else if (stato == STR) {
            if (c != '\"') putchar(c);
            else {
                putchar(c);
                stato = NORM;
            }
        }
        else if (stato == SLASH) {
            if (c != '*') {
                putchar('/');
                putchar(c);
            }
            else stato = COMM;
        }
        else if (stato == COMM) {
            if (c == '*') stato = ASTER;
        }
        else if (stato == ASTER) {
            if (c != '/') stato = COMM;
            else stato = NORM;
        }
    }
    putchar('\n');

    return 0;
}