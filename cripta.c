/* Il programma accetta un numero intero di 4 cifre
 * e lo codifica con le seguenti direttive: ogni cifra 
 * viene sostituita con il risultato della somma modulo 
 * dieci tra la cifra stessa e sette. 
 * Infine scambia la prima cifra con la terza e la 
 * seconda con la quarta.
 */ 

#include <stdio.h>

int main() {
    int num, c1, c2, c3, c4, tmp; 

    do {
        printf("Numero da crittografare: ");
        scanf("%d", &num);
    } while (num < 0 || num > 9999);

    c4 = num % 10; /* Trovo c4 originale */
    c4 = (c4 + 7) % 10; /* Nuova assegnazione di c4 */

    num /= 10;
    c3 = num % 10;
    c3 = (c3 + 7) % 10; /* Nuova assegnazione di c3 */

    num /= 10;
    c2 = num % 10;
    c2 = (c2 + 7) % 10; /* Nuova assegnazione di c2 */

    num /= 10;
    c1 = num % 10;
    c1 = (c1 + 7) % 10; /* Nuova assegnazione di c1 */

    /* scambio di posizioni*/
    tmp = c3;
    c3 = c1;
    c1 = tmp;

    tmp = c2;
    c2 = c4;
    c4 = tmp;

    num = c1 * 1000 + c2 * 100 + c3 * 10 + c4;
    printf("Numero crittografato: %d\n", num);

    return 0;
}