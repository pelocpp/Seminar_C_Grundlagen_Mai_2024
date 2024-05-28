#include <stdio.h>    // printf

// Zeigerarithmetik

#define Max 5

void test_08_01()
{
    int zahlen[Max] = { 0 };

    // Das Feld vorbelegen
    for (int i = 0; i < Max; i++) {

        // Notation mit Zeigerarithmetik
        // zahlen[i] = 2 * i;    // Index-Operator - Abkürzung
        * (zahlen + i) = 2 * i;  // Formulierung mit Adressarithmetik
    }

    // -----------------

    int* pi = zahlen;

    // Einen Speicherbereich vorbelegen
    for (int i = 0; i < Max; i++) {

        // Notation mit Zeigerarithmetik
        *(pi + i) = 2 * i;
    }

    // Einen Speicherbereich ausgeben
    for (int i = 0; i < Max; i++) {

        // Notation mit Zeigerarithmetik
        printf("Wert an der Stelle %d: %d\n", i, *(pi + i));
    }
}

void feldVorbelegen1(int feld[5])
{
    for (int i = 0; i < Max; i++) {

        feld[i] = 2 * i;
    }
}

void feldVorbelegen2(int feld[], int length)
{
    for (int i = 0; i < length; i++) {

        feld[i] = 2 * i;
    }
}

void feldVorbelegen3(int* feld, int length)
{
    for (int i = 0; i < length; i++) {

        feld[i] = 2 * i;
        // ist identisch mit
        *(feld + i) = 2 * i;
    }
}


void test_08()
{
    int zahlen[10] = { 0 };

    // Das Feld vorbelegen
    feldVorbelegen3(zahlen, 10);
}
