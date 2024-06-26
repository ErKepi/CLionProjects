// Uebung 4: ggT
// Variante 2: Rekursiv, Beispiel in der Folie, Seite 153

#include <stdio.h>

long ggT(long x, long y) {
    if (x == y) {
        return x; //Endekriterium
    } if (x > y) {
        return ggT(x - y, y); //rekursiver Aufruf
    } if (x < y) {
        return ggT(x, y - x); //rekursiver Aufruf
    }
}

int main() {
    long x, y;

    printf("Es wird der ggT gesucht.\n");
    printf("Geben Sie den ersten Wert an: \n");
    scanf("%ld", &x);

    printf("Geben Sie den zweiten Wert an: \n");
    scanf("%ld", &y);

    printf("Der ggT von %ld und %ld ist %ld", x, y, ggT(x, y));

    return 0;
}
