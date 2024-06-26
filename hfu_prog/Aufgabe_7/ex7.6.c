//Uebung 5: Worte und Zeichen 2

#include <stdio.h>
#include <ctype.h>

void stat(const char *s, int *z, int *w) {
    //int zeichen = 0, worte = 0;
    int counterChars = 0, counterWords =0;

    for (int i = 0; s[i] != '\0'; i++) {
        if (isspace(s[i]) == 0) {
            counterChars++;
        }
    }

    for (int i = 0; s[i] != '\0'; i++) {
        //Wenn an Index i Leerstelle UND index = 0 ist ODER Leerstelle an index i-1
        if (isspace(s[i]) == 0 && (i == 0 || isspace(s[i - 1]))) {
            counterWords++;
        }
    }

    *z = counterChars;
    *w = counterWords;
}

int main() {
    char s[50];
    int zeichen, worte;

    printf("Geben Sie etwas ein: \n");
    gets(s);

    stat(s, &zeichen, &worte);

    printf("'%s'\n", s);
    printf("Anzahl der Worte = %i\n", worte);
    printf("Anzahl der Zeichen = %i\n", zeichen);

    return 0;
}
