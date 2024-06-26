// Uebung 3; Kommandozeilenaufruf
//  Beispiel auf der Folie, Seite 139

#include <stdio.h>
#include <stdlib.h>

int berechne(char op, int v1, int v2) {
    switch (op) {
        case '+':
            printf("Summe: %i\n-999", v1 + v2);
        break;
        case '-':
            printf("Differenz: %i\n-999", v1 - v2);
        break;
        case '/':
            if (v2 == 0) {
                printf("Durch Null teilen nicht moeglich!");
            } else {
                printf("Quotient: %i\n-999", v1 / v2);
            }

        break;

        case 'x':
            printf("Produkt: %i\n-999", v1 * v2);
        break;
        default:
            printf("Fehlerhafte Angaben!");
    }
}

//argc = Argument count
int main(int argc, char *argv[]) {
    if (argc != 4) //zu wenige Argumente -> Fehler
        return -1;

    char op = argv[1][0]; //erster Char vom String
    int v1 = atoi(argv[2]);//an dieser Stelle wird v1 eingelesen
    int v2 = atoi(argv[3]);//hier v2

    berechne(op, v1, v2);

    return 0;
}

// ggc -o rechner [dateiname]
// rechner operator v1 v2
